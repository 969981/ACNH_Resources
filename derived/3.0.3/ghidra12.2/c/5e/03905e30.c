
void FUN_03905e30(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  size_t __size;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  
  lVar13 = DAT_05ae7600;
  if ((int)param_2 < 1) {
    return;
  }
  uVar9 = (ulong)param_2;
  __size = (ulong)param_2 * 0x18 + 8;
  if (DAT_05ae7600 == 0) {
    puVar6 = malloc(__size);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_03905fb8;
    }
    puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
  }
  if (puVar6 != (ulong *)0x0) {
    puVar7 = puVar6 + 1;
    *puVar6 = uVar9;
    uVar11 = uVar9 * 0x18 - 0x18;
    uVar1 = ((uint)(uVar11 / 0x18) & 0xfffffff) + 1;
    uVar10 = (ulong)uVar1 & 3;
    puVar6 = puVar7;
    if ((uVar1 & 3) != 0) {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        *(undefined4 *)puVar6 = 0xffffffff;
        uVar10 = uVar10 - 1;
        puVar6[1] = (ulong)puVar2;
        puVar6[2] = (ulong)"Undefined";
        puVar6 = puVar6 + 3;
      } while (uVar10 != 0);
    }
    if (0x47 < uVar11) {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        *(undefined4 *)puVar6 = 0xffffffff;
        *(undefined4 *)(puVar6 + 3) = 0xffffffff;
        *(undefined4 *)(puVar6 + 6) = 0xffffffff;
        *(undefined4 *)(puVar6 + 9) = 0xffffffff;
        puVar6[1] = (ulong)puVar2;
        puVar6[2] = (ulong)"Undefined";
        puVar6[4] = (ulong)puVar2;
        puVar6[5] = (ulong)"Undefined";
        puVar6[7] = (ulong)puVar2;
        puVar6[8] = (ulong)"Undefined";
        puVar6[10] = (ulong)puVar2;
        puVar6[0xb] = (ulong)"Undefined";
        puVar6 = puVar6 + 0xc;
      } while (puVar6 != puVar7 + uVar9 * 3);
    }
    *(ulong **)(param_1 + 0x28) = puVar7;
    *(uint *)(param_1 + 0x20) = param_2;
  }
LAB_03905fb8:
  iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x20);
  if (iVar3 != 0) {
    iVar12 = 0;
    lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    uVar10 = uVar9 * 0x18 - 0x18;
    uVar1 = ((uint)(uVar10 / 0x18) & 0xfffffff) + 1;
    do {
      lVar4 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        puVar6 = malloc(__size);
joined_r0x039060a8:
        if (puVar6 != (ulong *)0x0) {
          puVar7 = puVar6 + 1;
          *puVar6 = uVar9;
          puVar6 = puVar7;
          if ((uVar1 & 7) != 0) {
            uVar11 = (ulong)uVar1 & 7;
            do {
              *(undefined4 *)puVar6 = 0xffffffff;
              uVar11 = uVar11 - 1;
              puVar6[1] = (ulong)&PTR_LAB_048f9770;
              puVar6[2] = (ulong)"Undefined";
              puVar6 = puVar6 + 3;
            } while (uVar11 != 0);
          }
          if (0xa7 < uVar10) {
            do {
              *(undefined4 *)puVar6 = 0xffffffff;
              *(undefined4 *)(puVar6 + 3) = 0xffffffff;
              *(undefined4 *)(puVar6 + 6) = 0xffffffff;
              *(undefined4 *)(puVar6 + 9) = 0xffffffff;
              *(undefined4 *)(puVar6 + 0xc) = 0xffffffff;
              *(undefined4 *)(puVar6 + 0xf) = 0xffffffff;
              *(undefined4 *)(puVar6 + 0x12) = 0xffffffff;
              *(undefined4 *)(puVar6 + 0x15) = 0xffffffff;
              puVar6[1] = (ulong)&PTR_LAB_048f9770;
              puVar6[2] = (ulong)"Undefined";
              puVar6[4] = (ulong)&PTR_LAB_048f9770;
              puVar6[5] = (ulong)"Undefined";
              puVar6[7] = (ulong)&PTR_LAB_048f9770;
              puVar6[8] = (ulong)"Undefined";
              puVar6[10] = (ulong)&PTR_LAB_048f9770;
              puVar6[0xb] = (ulong)"Undefined";
              puVar6[0xd] = (ulong)&PTR_LAB_048f9770;
              puVar6[0xe] = (ulong)"Undefined";
              puVar6[0x10] = (ulong)&PTR_LAB_048f9770;
              puVar6[0x11] = (ulong)"Undefined";
              puVar6[0x13] = (ulong)&PTR_LAB_048f9770;
              puVar6[0x14] = (ulong)"Undefined";
              puVar6[0x16] = (ulong)&PTR_LAB_048f9770;
              puVar6[0x17] = (ulong)"Undefined";
              puVar6 = puVar6 + 0x18;
            } while (puVar6 != puVar7 + uVar9 * 3);
          }
          *(uint *)(lVar13 + (long)iVar12 * 0x150 + 0x20) = param_2;
          *(ulong **)(lVar13 + (long)iVar12 * 0x150 + 0x28) = puVar7;
        }
      }
      else {
        plVar5 = param_3;
        if (param_3 != (long *)0x0) {
LAB_03906084:
          puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
          goto joined_r0x039060a8;
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar4 + 8);
        if (lVar8 != 0) {
          plVar5 = (long *)(lVar8 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 != (long *)0x0) goto LAB_03906084;
      }
      iVar12 = iVar12 + 1;
    } while (iVar3 != iVar12);
  }
  return;
}

