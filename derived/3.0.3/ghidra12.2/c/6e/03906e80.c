
void FUN_03906e80(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  size_t __size;
  undefined *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  
  puVar2 = (uint *)(param_1 + 0x14);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = *puVar2 | 0x20;
      cVar5 = ExclusiveMonitorsStatus();
    }
    lVar16 = DAT_05ae7600;
  } while (cVar5 != '\0');
  if ((int)param_2 < 1) {
    return;
  }
  uVar12 = (ulong)param_2;
  __size = (ulong)param_2 * 0x18 + 8;
  if (DAT_05ae7600 == 0) {
    puVar9 = malloc(__size);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_03907018;
    }
    puVar9 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
  }
  if (puVar9 != (ulong *)0x0) {
    puVar10 = puVar9 + 1;
    *puVar9 = uVar12;
    uVar14 = uVar12 * 0x18 - 0x18;
    uVar1 = ((uint)(uVar14 / 0x18) & 0xfffffff) + 1;
    uVar13 = (ulong)uVar1 & 3;
    puVar9 = puVar10;
    if ((uVar1 & 3) != 0) {
      puVar3 = PTR_DAT_04bb2020 + 0x10;
      do {
        *(undefined4 *)puVar9 = 0xffffffff;
        uVar13 = uVar13 - 1;
        puVar9[1] = (ulong)puVar3;
        puVar9[2] = (ulong)"Undefined";
        puVar9 = puVar9 + 3;
      } while (uVar13 != 0);
    }
    if (0x47 < uVar14) {
      puVar3 = PTR_DAT_04bb2020 + 0x10;
      do {
        *(undefined4 *)puVar9 = 0xffffffff;
        *(undefined4 *)(puVar9 + 3) = 0xffffffff;
        *(undefined4 *)(puVar9 + 6) = 0xffffffff;
        *(undefined4 *)(puVar9 + 9) = 0xffffffff;
        puVar9[1] = (ulong)puVar3;
        puVar9[2] = (ulong)"Undefined";
        puVar9[4] = (ulong)puVar3;
        puVar9[5] = (ulong)"Undefined";
        puVar9[7] = (ulong)puVar3;
        puVar9[8] = (ulong)"Undefined";
        puVar9[10] = (ulong)puVar3;
        puVar9[0xb] = (ulong)"Undefined";
        puVar9 = puVar9 + 0xc;
      } while (puVar9 != puVar10 + uVar12 * 3);
    }
    *(ulong **)(param_1 + 0x58) = puVar10;
    *(uint *)(param_1 + 0x50) = param_2;
  }
LAB_03907018:
  iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x20);
  if (iVar4 != 0) {
    iVar15 = 0;
    lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    uVar13 = uVar12 * 0x18 - 0x18;
    uVar1 = ((uint)(uVar13 / 0x18) & 0xfffffff) + 1;
    do {
      lVar7 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        puVar9 = malloc(__size);
joined_r0x0390710c:
        if (puVar9 != (ulong *)0x0) {
          puVar10 = puVar9 + 1;
          *puVar9 = uVar12;
          puVar9 = puVar10;
          if ((uVar1 & 7) != 0) {
            uVar14 = (ulong)uVar1 & 7;
            do {
              *(undefined4 *)puVar9 = 0xffffffff;
              uVar14 = uVar14 - 1;
              puVar9[1] = (ulong)&PTR_LAB_048f9770;
              puVar9[2] = (ulong)"Undefined";
              puVar9 = puVar9 + 3;
            } while (uVar14 != 0);
          }
          if (0xa7 < uVar13) {
            do {
              *(undefined4 *)puVar9 = 0xffffffff;
              *(undefined4 *)(puVar9 + 3) = 0xffffffff;
              *(undefined4 *)(puVar9 + 6) = 0xffffffff;
              *(undefined4 *)(puVar9 + 9) = 0xffffffff;
              *(undefined4 *)(puVar9 + 0xc) = 0xffffffff;
              *(undefined4 *)(puVar9 + 0xf) = 0xffffffff;
              *(undefined4 *)(puVar9 + 0x12) = 0xffffffff;
              *(undefined4 *)(puVar9 + 0x15) = 0xffffffff;
              puVar9[1] = (ulong)&PTR_LAB_048f9770;
              puVar9[2] = (ulong)"Undefined";
              puVar9[4] = (ulong)&PTR_LAB_048f9770;
              puVar9[5] = (ulong)"Undefined";
              puVar9[7] = (ulong)&PTR_LAB_048f9770;
              puVar9[8] = (ulong)"Undefined";
              puVar9[10] = (ulong)&PTR_LAB_048f9770;
              puVar9[0xb] = (ulong)"Undefined";
              puVar9[0xd] = (ulong)&PTR_LAB_048f9770;
              puVar9[0xe] = (ulong)"Undefined";
              puVar9[0x10] = (ulong)&PTR_LAB_048f9770;
              puVar9[0x11] = (ulong)"Undefined";
              puVar9[0x13] = (ulong)&PTR_LAB_048f9770;
              puVar9[0x14] = (ulong)"Undefined";
              puVar9[0x16] = (ulong)&PTR_LAB_048f9770;
              puVar9[0x17] = (ulong)"Undefined";
              puVar9 = puVar9 + 0x18;
            } while (puVar9 != puVar10 + uVar12 * 3);
          }
          *(uint *)(lVar16 + (long)iVar15 * 0x150 + 0x50) = param_2;
          *(ulong **)(lVar16 + (long)iVar15 * 0x150 + 0x58) = puVar10;
        }
      }
      else {
        plVar8 = param_3;
        if (param_3 != (long *)0x0) {
LAB_039070e8:
          puVar9 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
          goto joined_r0x0390710c;
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar7 + 8);
        if (lVar11 != 0) {
          plVar8 = (long *)(lVar11 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 != (long *)0x0) goto LAB_039070e8;
      }
      iVar15 = iVar15 + 1;
    } while (iVar4 != iVar15);
  }
  return;
}

