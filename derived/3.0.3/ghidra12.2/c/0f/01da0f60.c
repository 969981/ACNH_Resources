
void FUN_01da0f60(long param_1,byte *param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0) {
      lVar9 = *(long *)PTR_DAT_04bb49f0;
      *(undefined1 *)(lVar9 + 0xb0) = 0;
      uVar2 = FUN_01d7c528(lVar9,param_2);
      if ((uVar2 & 1) == 0) {
        bVar3 = *param_2;
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        *(byte *)(lVar9 + 0xb1) = bVar3;
        *(undefined1 *)(lVar9 + 0xb0) = 1;
      }
    }
    lVar9 = DAT_05379880;
    uVar8 = 0;
    if (*(uint *)(DAT_05379880 + 0x28) != 0xffffffff) {
      uVar8 = *(uint *)(DAT_05379880 + 0x28);
    }
    if (*(uint *)(DAT_05379880 + 8) <= uVar8) {
      uVar8 = 0;
    }
    lVar6 = *(long *)(DAT_05379880 + 0x10) + (long)(int)uVar8 * 0x40;
    if ((*(byte *)(lVar6 + 0x31) >> 3 & 1) != 0) {
      puVar4 = *(uint **)(*(long *)(lVar6 + 0x28) + 0x10);
      if ((int)puVar4[4] < 1) {
        plVar5 = &DAT_0414d6f0;
      }
      else {
        uVar8 = 0;
        plVar5 = &DAT_0414d6f0;
        do {
          uVar1 = uVar8;
          if (*puVar4 <= uVar8) {
            uVar1 = 0;
          }
          if (*(long *)(*(long *)(puVar4 + 2) + (ulong)uVar1 * 0x30 + 8) == *param_3) {
            plVar5 = (long *)(*(long *)(puVar4 + 2) + (ulong)uVar1 * 0x30);
            break;
          }
          uVar8 = uVar8 + 1;
        } while (puVar4[4] != uVar8);
      }
      if (*(int *)(DAT_05379880 + 0x68) == 0 && *(int *)(DAT_05379880 + 0xb0) == 0) {
        if ((*(int *)(DAT_05358908 + 0x78) == 0) || (1 < *(int *)(DAT_05358908 + 0xc4) - 1U)) {
          uVar7 = 0;
          if (**(long **)(DAT_053719b8 + 8) == 0 && (*(long **)(DAT_053719b8 + 8))[1] == 0) {
            uVar7 = 3;
          }
        }
        else {
          uVar7 = 2;
        }
      }
      else {
        uVar7 = 1;
      }
      lVar6 = *plVar5;
      *(undefined4 *)(DAT_05379880 + 0x168) = uVar7;
      if ((*(int *)(lVar9 + 0x168) == 0) && (lVar6 != 0)) {
        **(undefined4 **)(lVar9 + 0x148) = 0;
        *(long *)(*(long *)(lVar9 + 0x148) + 8) = lVar6;
        *(undefined1 *)(lVar9 + 0x1b1) = 1;
        *(undefined4 *)(lVar9 + 0x138) = 3;
        FUN_03ebb160(lVar9 + 0xa8,1);
        *(long *)(param_1 + 0x58) = *param_3;
        bVar3 = *param_2;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(long *)(param_1 + 8) = param_1;
        *(undefined1 **)(param_1 + 0x10) = &LAB_01da1c54;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 *)(param_1 + 0x40) = 1;
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        *(byte *)(param_1 + 0x50) = bVar3;
        *(long *)(param_1 + 0x28) = param_1;
        *(undefined1 **)(param_1 + 0x30) = &LAB_01da11b4;
        if (param_4 != (undefined8 *)0x0) {
          plVar5 = (long *)(param_1 + 0x48);
          *plVar5 = (long)param_4;
          *param_4 = plVar5;
          lVar9 = *plVar5;
          *(undefined8 *)(lVar9 + 8) = 0;
          *(undefined8 *)(lVar9 + 0x10) = 0;
        }
        *(undefined1 *)(param_1 + 0x60) = 1;
        return;
      }
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    param_4[1] = 0x2cffffffff;
    param_4[2] = 0;
  }
  return;
}

