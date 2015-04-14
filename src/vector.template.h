typedef struct $<name_2>_s
{
    union
    {
        struct
        {
            $<type> x;
            $<type> y;
        };
        struct
        {
            $<type> w;
            $<type> h;
        };
        $<type> d[2];
    };
} $<name_2>;

inline static $<name_2> make_$<name_2>($<type> x, $<type> y)
{
    $<name_2> result;
    result.x = x;
    result.y = y;
    return result;
}

inline static $<name_2> sub_$<name_2> ($<name_2> a, $<name_2> b)
{
    $<name_2> result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

inline static $<name_2> add_$<name_2> ($<name_2> a, $<name_2> b)
{
    $<name_2> result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

inline static $<name_2> mul_$<name_2> ($<name_2> a, $<name_2> b)
{
    $<name_2> result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    return result;
}

inline static $<name_2> scale_$<name_2> ($<name_2> v, $<type> factor)
{
    $<name_2> result;
    result.x = factor * v.x;
    result.y = factor * v.y;
    return result;
}

inline static $<name_2> invscale_$<name_2> ($<name_2> v, $<type> factor)
{
    $<name_2> result;
    result.x = v.x / factor;
    result.y = v.y / factor;
    return result;
}

typedef struct $<name_3>_s
{
    union
    {
        struct
        {
            $<type> x;
            $<type> y;
            $<type> z;
        };
        struct
        {
            $<type> r;
            $<type> g;
            $<type> b;
        };
        struct
        {
            $<type> h;
            $<type> s;
            $<type> v;
        };
        $<type> d[3];
    };
} $<name_3>;

static $<name_3> make_$<name_3>($<type> x, $<type> y, $<type> z)
{
    $<name_3> result;
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}

inline static $<name_3> sub_$<name_3> ($<name_3> a, $<name_3> b)
{
    $<name_3> result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

inline static $<name_3> add_$<name_3> ($<name_3> a, $<name_3> b)
{
    $<name_3> result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

inline static $<name_3> mul_$<name_3> ($<name_3> a, $<name_3> b)
{
    $<name_3> result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    result.z = a.z * b.z;
    return result;
}

inline static $<name_3> scale_$<name_3> ($<name_3> v, $<type> factor)
{
    $<name_3> result;
    result.x = factor * v.x;
    result.y = factor * v.y;
    result.z = factor * v.z;
    return result;
}

inline static $<name_3> invscale_$<name_3> ($<name_3> v, $<type> factor)
{
    $<name_3> result;
    result.x = v.x / factor;
    result.y = v.y / factor;
    result.z = v.z / factor;
    return result;
}