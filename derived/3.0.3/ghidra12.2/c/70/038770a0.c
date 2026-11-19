
void FUN_038770a0(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 *__dest;
  long lVar14;
  undefined *local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [256];
  undefined1 local_6c;
  
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  lVar14 = *(long *)(param_2 + 8);
  if (lVar14 != param_2) {
    puVar1 = PTR_DAT_04bc1120 + 0x10;
    do {
      local_6c = 0;
      puVar7 = *(undefined1 **)(lVar14 + 0x58);
      local_170 = 0x101;
      uVar12 = *(undefined8 *)(lVar14 + 0x20);
      uVar6 = *(uint *)(lVar14 + 0x28);
      uVar3 = *(undefined8 *)(lVar14 + 0x30);
      uVar4 = *(undefined8 *)(lVar14 + 0x38);
      local_16c[0] = 0;
      uVar13 = *(undefined8 *)(lVar14 + 0x68);
      local_180 = puVar1;
      local_178 = local_16c;
      if (local_16c != puVar7) {
        lVar9 = 0;
        do {
          if (puVar7[lVar9] == '\0') goto LAB_038771dc;
          if (puVar7[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_038771dc;
          }
          if (puVar7[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_038771dc;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_038771dc:
        iVar8 = (int)lVar9;
        if (0xff < iVar8) {
          iVar8 = 0x100;
        }
        memcpy(local_16c,puVar7,(long)iVar8);
        local_16c[iVar8] = 0;
      }
      iVar8 = (int)param_1[2];
      iVar5 = (int)param_1[1];
      if (iVar8 < iVar5) {
        lVar9 = *param_1;
        *(int *)(param_1 + 2) = iVar8 + 1;
        iVar8 = *(int *)((long)param_1 + 0xc) + iVar8;
        iVar2 = 0;
        if (iVar5 <= iVar8) {
          iVar2 = iVar5;
        }
        iVar8 = iVar8 - iVar2;
        puVar10 = (undefined8 *)(lVar9 + (long)iVar8 * 0x140);
        __dest = (undefined1 *)puVar10[6];
        puVar10[3] = uVar4;
        puVar10[4] = uVar13;
        puVar10[1] = CONCAT44(uVar6 % 1000,uVar6 / 1000);
        puVar10[2] = uVar3;
        *puVar10 = uVar12;
        (**(code **)(local_180 + 0x18))(&local_180);
        puVar7 = local_178;
        if (__dest != local_178) {
          (**(code **)(local_180 + 0x18))(&local_180);
          lVar11 = 0;
          do {
            if (local_178[lVar11] == '\0') goto LAB_03877104;
            if (local_178[lVar11 + 1] == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_03877104;
            }
            if (local_178[lVar11 + 2] == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_03877104;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_03877104:
          iVar5 = *(int *)(lVar9 + (long)iVar8 * 0x140 + 0x38);
          iVar8 = (int)lVar11;
          if (iVar5 <= (int)lVar11) {
            iVar8 = iVar5 + -1;
          }
          memcpy(__dest,puVar7,(long)iVar8);
          __dest[iVar8] = 0;
        }
      }
      lVar14 = *(long *)(lVar14 + 8);
    } while (lVar14 != param_2);
  }
  return;
}

