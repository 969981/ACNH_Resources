
void FUN_029ab224(long param_1,uint param_2,long param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (DAT_04c487d4 == -1) {
LAB_029ab280:
    lVar4 = *param_4;
    if ((param_2 & 1) != 0) {
      lVar4 = (*(long *)PTR_DAT_04bb29d0 * (param_5 - param_3)) / 1000 + lVar4;
    }
    *(long *)(param_1 + 0x20) = lVar4;
    lVar6 = 0;
    *(undefined1 *)(param_1 + 0x120) = 0;
    lVar4 = *param_4 - lVar4;
    if (lVar4 != 0) {
      lVar5 = (long)*(int *)(param_1 + 0x128);
      if (lVar4 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
        lVar6 = 0;
        if (*(long *)PTR_DAT_04bb29d0 != 0) {
          lVar6 = (lVar4 * 1000000) / *(long *)PTR_DAT_04bb29d0;
        }
      }
      else if (lVar4 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        lVar6 = 0;
        if (*(long *)PTR_DAT_04bb29d0 != 0) {
          lVar6 = (lVar4 * 1000) / *(long *)PTR_DAT_04bb29d0;
        }
        lVar6 = lVar6 * 1000;
      }
      else {
        lVar6 = 0;
        if (DAT_05ae7888 != 0) {
          lVar6 = lVar4 / DAT_05ae7888;
        }
        lVar6 = lVar6 * 1000000;
      }
      lVar6 = (lVar6 * *(int *)(param_1 + 0x124)) / 1000000;
      if (lVar5 <= lVar6) {
        lVar7 = *(int *)(param_1 + 300) - lVar5;
        lVar4 = 0;
        if (lVar7 != 0) {
          lVar4 = (lVar6 - lVar5) / lVar7;
        }
        *(int *)(param_1 + 0x10) =
             *(int *)(param_1 + 0x128) + ((int)(lVar6 - lVar5) - (int)lVar4 * (int)lVar7);
        goto joined_r0x029ab3c8;
      }
    }
LAB_029ab390:
    *(int *)(param_1 + 0x10) = (int)lVar6;
    uVar2 = 0;
  }
  else {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar1 + 4) & 1) == 0) || (*(int *)(param_1 + 0xc) != 0)) goto LAB_029ab280;
    lVar4 = *param_4;
    *(undefined1 *)(param_1 + 0x120) = 0;
    lVar6 = 0;
    *(long *)(param_1 + 0x20) = lVar4;
    lVar4 = *param_4 - lVar4;
    if (lVar4 == 0) goto LAB_029ab390;
    lVar5 = (long)*(int *)(param_1 + 0x128);
    if (lVar4 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
      lVar6 = 0;
      if (*(long *)PTR_DAT_04bb29d0 != 0) {
        lVar6 = (lVar4 * 1000000) / *(long *)PTR_DAT_04bb29d0;
      }
    }
    else if (lVar4 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
      lVar6 = 0;
      if (*(long *)PTR_DAT_04bb29d0 != 0) {
        lVar6 = (lVar4 * 1000) / *(long *)PTR_DAT_04bb29d0;
      }
      lVar6 = lVar6 * 1000;
    }
    else {
      lVar6 = 0;
      if (DAT_05ae7888 != 0) {
        lVar6 = lVar4 / DAT_05ae7888;
      }
      lVar6 = lVar6 * 1000000;
    }
    lVar6 = (lVar6 * *(int *)(param_1 + 0x124)) / 1000000;
    if (lVar6 < lVar5) goto LAB_029ab390;
    lVar7 = *(int *)(param_1 + 300) - lVar5;
    lVar4 = 0;
    if (lVar7 != 0) {
      lVar4 = (lVar6 - lVar5) / lVar7;
    }
    *(int *)(param_1 + 0x10) =
         *(int *)(param_1 + 0x128) + ((int)(lVar6 - lVar5) - (int)lVar4 * (int)lVar7);
joined_r0x029ab3c8:
    uVar3 = 0xffffffff;
    uVar2 = (int)lVar4;
    if (0xffffffff < lVar4) goto LAB_029ab39c;
  }
  uVar3 = uVar2;
LAB_029ab39c:
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return;
}

