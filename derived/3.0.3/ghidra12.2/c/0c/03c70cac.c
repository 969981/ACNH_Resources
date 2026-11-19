
bool FUN_03c70cac(undefined8 param_1,float *param_2,float *param_3)

{
  if ((((((*param_2 == *param_3) && (param_2[1] == param_3[1])) && (param_2[2] == param_3[2])) &&
       ((param_2[3] == param_3[3] && (param_2[4] == param_3[4])))) &&
      ((param_2[5] == param_3[5] && ((param_2[6] == param_3[6] && (param_2[7] == param_3[7])))))) &&
     ((param_2[8] == param_3[8] && ((param_2[9] == param_3[9] && (param_2[10] == param_3[10])))))) {
    return param_2[0xb] == param_3[0xb];
  }
  return false;
}

