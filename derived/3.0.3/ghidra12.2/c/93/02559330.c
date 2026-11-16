
void FUN_02559330(byte *param_1,byte *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  short sVar9;
  long lVar10;
  undefined8 *puVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar10 + 0x338));
      iVar5 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar6 = 0;
    puVar11 = DAT_055c1b60;
    do {
      if (*(int *)(puVar11 + -1) == *(int *)(puVar13 + 7)) {
        if (((uVar6 ^ 0xffffffff) & 0xffff) != 0) goto LAB_02559414;
        break;
      }
      puVar11 = (undefined8 *)puVar11[1];
      uVar6 = uVar6 + 1;
    } while (puVar11 != &DAT_055c1b58);
  }
  uVar6 = 0;
LAB_02559414:
  uVar7 = FUN_016e6c20(uVar6);
  if ((uVar7 & 1) == 0) {
    puVar8 = (uint *)FUN_0251d928(*(undefined2 *)(param_2 + 3));
    puVar3 = (uint *)((long)puVar8 - (ulong)*puVar8);
    if ((((*puVar8 != 0) && (puVar3 != (uint *)0x0)) && (*puVar3 != 0)) &&
       ((uVar6 = puVar3[1], uVar6 != 0 && ((ulong)(ushort)puVar3[2] != 0)))) {
      lVar10 = 0xc;
      if (*(char *)((long)puVar3 + 10) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar3 + lVar10 + (ulong)(ushort)puVar3[2] * 8;
      if (lVar10 != 0) {
        uVar2 = 0;
        if ((ulong)uVar6 != 0) {
          uVar2 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar6);
        }
        if (*puVar3 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05490140) && (*(short *)(DAT_05490148 + (long)(int)uVar2 * 2) == 1)) {
          bVar12 = *param_1;
          if (7 < bVar12) {
            bVar12 = 0xff;
          }
          *param_2 = bVar12;
          lVar10 = *(long *)puVar1;
          if (lVar10 == 0) {
            puVar13 = &DAT_055c04a0;
          }
          else {
            puVar13 = &DAT_055c04a0;
            if (*(long *)(lVar10 + 0x330) != 0) {
              puVar13 = (undefined8 *)
                        (**(code **)(*DAT_05aed668 + 0x18))
                                  (DAT_05aed668,*(undefined4 *)(lVar10 + 0x338));
              iVar5 = FUN_006bd550(*puVar13,0);
              puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar5 != 0x758f7eaf) {
                puVar13 = &DAT_055c04a0;
              }
            }
          }
          if (DAT_055c1b60 != &DAT_055c1b58) {
            sVar9 = 0;
            puVar11 = DAT_055c1b60;
            do {
              if (*(int *)(puVar11 + -1) == *(int *)(puVar13 + 7)) {
                if (sVar9 != -1) goto LAB_02559584;
                break;
              }
              puVar11 = (undefined8 *)puVar11[1];
              sVar9 = sVar9 + 1;
            } while (puVar11 != &DAT_055c1b58);
          }
          sVar9 = 0;
LAB_02559584:
          *(short *)(param_2 + 1) = sVar9;
          bVar12 = *param_1;
          local_28 = 0;
          local_22 = 0;
          bVar4 = 7 < bVar12;
          if (bVar4) {
            bVar12 = 0xff;
          }
          local_24 = 0xff00;
          puVar1 = PTR_DAT_04bc31c0 + (ulong)(uint)(int)(char)bVar12 * 0x30;
          if (bVar4) {
            puVar1 = PTR_DAT_04bc31c0;
          }
          if (-1 < *(int *)(puVar1 + 8)) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(puVar1 + 8),&local_28,param_2,
                         0x80,0);
          }
        }
      }
    }
  }
  return;
}

