
void FUN_02a72e90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb27c0;
  iVar7 = 0;
  param_1 = param_1 + 8;
  do {
    if ((*(short *)(param_1 + (long)iVar7 * 0x14 + 4) != 0) && (lVar6 = *(long *)puVar1, lVar6 != 0)
       ) {
      uVar5 = *(uint *)(param_1 + (long)iVar7 * 0x14);
      if ((uVar5 == 0) ||
         (((lVar8 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar5 >> 0x11) & 0x7ff8)), lVar8 == 0 ||
           ((*(uint *)(lVar8 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar8 + 0x230) != uVar5)))) {
        lVar8 = 0;
      }
      if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
        plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        lVar6 = *(long *)puVar1;
        iVar3 = (**(code **)(*plVar4 + 0x60))();
        if (iVar3 < 0x11) {
          uVar5 = 1;
        }
        else {
          uVar5 = *(uint *)(lVar6 + 0x5e8);
          if (4 < uVar5) goto LAB_02a72f84;
          uVar5 = 0x1aU >> (ulong)(uVar5 & 0x1f) & 1;
        }
      }
      else {
LAB_02a72f84:
        uVar5 = 0;
      }
      if (lVar8 != 0) {
        uVar5 = uVar5 ^ 1;
        if (*(int *)(lVar8 + 0x150) != 1) {
          uVar5 = 1;
        }
        if ((uVar5 == 0) && (lVar6 = *(long *)(lVar8 + 0x68), lVar6 != 0)) {
          lVar8 = param_1 + (long)iVar7 * 0x14;
          *(undefined4 *)(lVar8 + 8) = *(undefined4 *)(lVar6 + 0x278);
          *(undefined4 *)(lVar8 + 0xc) = *(undefined4 *)(lVar6 + 0x27c);
          *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(lVar6 + 0x280);
        }
      }
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 0x24) {
      return;
    }
  } while( true );
}

