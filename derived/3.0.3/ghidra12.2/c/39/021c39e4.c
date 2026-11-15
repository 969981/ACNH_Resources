
ushort FUN_021c39e4(ushort *param_1)

{
  return (ushort)(*param_1 | param_1[1] | param_1[2] | param_1[3] |
                  param_1[4] | param_1[5] | param_1[6] | param_1[7] | param_1[8] | param_1[9]) >>
         0xf ^ 1;
}

