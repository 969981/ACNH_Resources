
uint FUN_03c44fb0(long *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined *local_18;
  
  uVar2 = FUN_03eaa1d8(param_2,&local_18);
  if ((uVar2 & 1) != 0) {
    if (local_18 == PTR_DAT_04bd2ea0) {
LAB_03c45030:
      uVar5 = 0;
    }
    else {
      uVar4 = 0;
      bVar1 = true;
      do {
        if (local_18[uVar4] != PTR_DAT_04bd2ea0[uVar4]) break;
        if (local_18[uVar4] == '\0') {
          if (bVar1) goto LAB_03c45030;
          break;
        }
        bVar1 = uVar4 < 0x80000;
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x80001);
      if (local_18 == PTR_DAT_04bd2ea0 + 5) {
LAB_03c45084:
        uVar5 = 1;
      }
      else {
        uVar4 = 0;
        bVar1 = true;
        do {
          if (local_18[uVar4] != PTR_DAT_04bd2ea0[uVar4 + 5]) break;
          if (local_18[uVar4] == '\0') {
            if (bVar1) goto LAB_03c45084;
            break;
          }
          bVar1 = uVar4 < 0x80000;
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0x80001);
        if (local_18 != PTR_DAT_04bd2ea0 + 0xb) {
          uVar4 = 0;
          bVar1 = true;
          do {
            if (local_18[uVar4] != PTR_DAT_04bd2ea0[uVar4 + 0xb]) break;
            if (local_18[uVar4] == '\0') {
              if (bVar1) goto LAB_03c450d4;
              break;
            }
            bVar1 = uVar4 < 0x80000;
            uVar4 = uVar4 + 1;
          } while (uVar4 != 0x80001);
          goto LAB_03c450ec;
        }
LAB_03c450d4:
        uVar5 = 2;
      }
    }
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(param_1);
    *puVar3 = uVar5;
  }
LAB_03c450ec:
  return uVar2 & 1;
}

