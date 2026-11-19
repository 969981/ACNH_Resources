
uint FUN_03b0e4b0(long *param_1,long param_2,uint param_3,long *param_4,undefined4 param_5,
                 uint param_6)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 local_68 [2];
  int local_64;
  
  if (param_3 == 0) {
    return 1;
  }
  if (((param_6 & 1) != 0) || (*(char *)((long)param_1 + 0x3d) == '\0')) {
    uVar11 = (ulong)param_3;
    local_64 = 0;
    local_68[0] = 0;
    if (param_4 != (long *)0x0) {
      local_64 = (**(code **)(*param_4 + 0x20))(param_4);
      local_68[0] = *(undefined2 *)((long)param_4 + 0x32);
    }
    if ((param_6 & 1) != 0) {
      uVar12 = 0;
      uVar10 = 1;
      do {
        uVar3 = local_68[0];
        puVar8 = (ushort *)(param_2 + uVar12 * 2);
        uVar2 = *puVar8;
        if ((uVar2 & 0xfffe) == 0xe) {
          if (uVar2 == 0xe) {
            puVar9 = (ushort *)((long)puVar8 + (ulong)puVar8[3] + 8);
          }
          else {
            puVar9 = puVar8;
            puVar4 = (ushort *)0x0;
            if (uVar2 == 0xf) {
              puVar9 = puVar8 + 3;
              puVar4 = puVar8;
            }
            puVar8 = puVar4;
          }
          uVar5 = (**(code **)(*param_1 + 0x10))
                            (param_1,&local_64,local_68,puVar8,param_4,param_5,1);
          if (((uVar5 | param_6 ^ 1) & 1) == 0) {
            return 0;
          }
          uVar12 = (long)puVar9 - param_2;
          uVar10 = uVar5 & uVar10;
          if ((long)puVar9 < param_2) {
            uVar12 = uVar12 + 1;
          }
          uVar12 = uVar12 >> 1 & 0xffffffff;
        }
        else {
          if (0x1f < uVar2 && local_64 != 0) {
            lVar7 = FUN_00357060(param_1[2],uVar2,local_64,local_68[0]);
            if (lVar7 == 0) {
              uVar6 = FUN_00356230(param_1[2],uVar2,uVar3);
              if ((uVar6 & 1) != 0) {
                return 0;
              }
            }
            else {
              bVar1 = *(byte *)(lVar7 + 0x38);
              *(byte *)(lVar7 + 0x38) = bVar1 | 1;
              if ((bVar1 >> 1 & 1) != 0) {
                return 0;
              }
            }
          }
          uVar12 = uVar12 + 1;
        }
        if (uVar11 <= uVar12) {
          return uVar10;
        }
      } while( true );
    }
    uVar12 = 0;
    uVar10 = 1;
    do {
      while( true ) {
        puVar8 = (ushort *)(param_2 + uVar12 * 2);
        uVar2 = *puVar8;
        if ((uVar2 & 0xfffe) != 0xe) break;
        puVar9 = puVar8;
        if (uVar2 == 0xf) {
          puVar8 = puVar8 + 3;
        }
        else if (uVar2 == 0xe) {
          puVar8 = (ushort *)((long)puVar8 + (ulong)puVar8[3] + 8);
        }
        else {
          puVar9 = (ushort *)0x0;
        }
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,&local_64,local_68,puVar9,param_4,param_5,0);
        if (((uVar5 | param_6 ^ 1) & 1) == 0) {
          return 0;
        }
        uVar12 = (long)puVar8 - param_2;
        uVar10 = uVar5 & uVar10;
        if ((long)puVar8 < param_2) {
          uVar12 = uVar12 + 1;
        }
        uVar12 = uVar12 >> 1 & 0xffffffff;
        if (uVar11 <= uVar12) goto LAB_03b0e728;
      }
      if (0x1f < uVar2 && local_64 != 0) {
        uVar5 = FUN_00354f90(param_1[2],uVar2,local_64,local_68[0],param_5,0);
        uVar10 = (uVar5 ^ 1) & uVar10;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar11);
LAB_03b0e728:
    if (uVar10 != 0) {
      return 1;
    }
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  return 0;
}

