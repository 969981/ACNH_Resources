
undefined8 FUN_001fc7f0(long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  char cVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined2 uVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  int local_78 [6];
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_001fc600(param_1);
  }
  lVar4 = FUN_00185a6c(0x130);
  if (lVar4 != 0) {
    FUN_001a4998(lVar4,param_1,2,1,0);
  }
  *(long *)(param_1 + 0x30) = lVar4;
  if ((param_4 & 1) == 0) {
LAB_001fc8bc:
    if ((param_4 >> 2 & 1) != 0) {
      lVar4 = FUN_00185a6c(0x1c0);
      if (lVar4 != 0) {
        FUN_001cd51c(lVar4,*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
      }
      *(long *)(param_1 + 0x10) = lVar4;
      FUN_001a4ff4(*(undefined8 *)(param_1 + 0x30),lVar4,1);
      (**(code **)(**(long **)(param_1 + 0x10) + 0x98))(local_78);
      puVar7 = PTR_LAB_04bc0ee0;
      if (local_78[0] < 0) {
        puVar7 = (undefined *)0x0;
      }
      if (puVar7 == (undefined *)0x0) goto LAB_001fd034;
    }
    puVar7 = PTR_DAT_04bcbb78;
    puVar13 = PTR_DAT_04bcb910;
    puVar14 = PTR_DAT_04bcb908;
    uVar18 = *(uint *)(param_1 + 0x48);
    if (*PTR_DAT_04bcb908 == '\0') {
LAB_001fc970:
      puVar6 = puVar7 + (ulong)uVar18 * 0x2a8 + 0x18;
    }
    else {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar5 == 0) goto LAB_001fc970;
      puVar6 = (undefined *)
               (*(long *)(puVar7 + (ulong)uVar18 * 0x2a8 + 0x10) + (ulong)*puVar5 * 0x148);
    }
    FUN_001ba56c(auStack_90,puVar6,30000);
    uVar18 = *(uint *)(param_1 + 0x48);
    if (*puVar14 == '\0') {
LAB_001fc9f4:
      uVar16 = *(uint *)(param_1 + 0x48);
      cVar12 = *puVar14;
      if (*(int *)(puVar7 + (ulong)uVar18 * 0x2a8 + 0x158) == 0) goto LAB_001fc9cc;
LAB_001fca14:
      if (cVar12 == '\0') {
LAB_001fca3c:
        puVar7 = puVar7 + (ulong)uVar16 * 0x2a8 + 0x18;
      }
      else {
        puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
        if (*puVar5 == 0) goto LAB_001fca3c;
        puVar7 = (undefined *)
                 (*(long *)(puVar7 + (ulong)uVar16 * 0x2a8 + 0x10) + (ulong)*puVar5 * 0x148);
      }
      FUN_001ba548(auStack_a8,puVar7,9000);
      *(bool *)(*(long *)(param_1 + 0x30) + 0xf8) = (param_4 & 9) != 0;
    }
    else {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
      if (*puVar5 == 0) goto LAB_001fc9f4;
      uVar16 = *(uint *)(param_1 + 0x48);
      cVar12 = *puVar14;
      if (*(int *)(*(long *)(puVar7 + (ulong)uVar18 * 0x2a8 + 0x10) + (ulong)*puVar5 * 0x148 + 0x140
                  ) != 0) goto LAB_001fca14;
LAB_001fc9cc:
      if (cVar12 == '\0') {
LAB_001fca6c:
        puVar7 = puVar7 + (ulong)uVar16 * 0x2a8 + 0x18;
      }
      else {
        puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
        if (*puVar5 == 0) goto LAB_001fca6c;
        puVar7 = (undefined *)
                 (*(long *)(puVar7 + (ulong)uVar16 * 0x2a8 + 0x10) + (ulong)*puVar5 * 0x148);
      }
      FUN_001ba548(auStack_c0,puVar7,5000);
      *(bool *)(*(long *)(param_1 + 0x30) + 0xf8) = (param_4 & 9) != 0;
    }
    if ((param_4 & 1) != 0) {
      puVar5 = *(uint **)(param_1 + 0x50);
      bVar1 = puVar5 != *(uint **)(param_1 + 0x58);
      if ((param_4 >> 1 & 1) == 0) {
        if (bVar1) {
          bVar3 = (byte)(param_4 >> 4) & 1;
          do {
            uVar8 = (**(code **)(**(long **)(param_1 + 0x40) + 0x20))
                              (*(long **)(param_1 + 0x40),param_2,param_1 + 0x4e,1,*puVar5,0,1,0,
                               bVar3);
            if (((uVar8 & 1) == 0) &&
               (uVar8 = (**(code **)(**(long **)(param_1 + 0x40) + 0x20))
                                  (*(long **)(param_1 + 0x40),0,param_1 + 0x4e,1,*puVar5,0,1,0,bVar3
                                  ), (uVar8 & 1) == 0)) goto LAB_001fd034;
            lVar4 = *(long *)(param_1 + 0x18);
            uVar18 = *puVar5;
            uVar15 = *(undefined2 *)(param_1 + 0x4e);
            puVar20 = (undefined8 *)(lVar4 + 0x30);
            puVar11 = (undefined8 *)*puVar20;
            if ((undefined8 *)*puVar20 == (undefined8 *)0x0) {
              puVar19 = puVar20;
            }
            else {
              do {
                while (puVar9 = puVar11, puVar20 = puVar9, *(uint *)((long)puVar9 + 0x1c) <= uVar18)
                {
                  if (uVar18 <= *(uint *)((long)puVar9 + 0x1c)) goto LAB_001fcac8;
                  puVar11 = (undefined8 *)puVar9[1];
                  if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
                    puVar19 = puVar9 + 1;
                    goto LAB_001fcb90;
                  }
                }
                puVar11 = (undefined8 *)*puVar9;
                puVar19 = puVar9;
              } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
            }
LAB_001fcb90:
            puVar9 = (undefined8 *)FUN_00187df4(0x28);
            *(uint *)((long)puVar9 + 0x1c) = uVar18;
            *(undefined2 *)(puVar9 + 4) = 0;
            puVar9[2] = puVar20;
            *puVar9 = 0;
            puVar9[1] = 0;
            *puVar19 = puVar9;
            puVar11 = puVar9;
            if (**(long **)(lVar4 + 0x28) != 0) {
              *(long *)(lVar4 + 0x28) = **(long **)(lVar4 + 0x28);
              puVar11 = (undefined8 *)*puVar19;
            }
            FUN_03876250(*(undefined8 *)(lVar4 + 0x30),puVar11);
            *(long *)(lVar4 + 0x38) = *(long *)(lVar4 + 0x38) + 1;
LAB_001fcac8:
            *(undefined2 *)(puVar9 + 4) = uVar15;
            puVar5 = puVar5 + 1;
          } while (puVar5 != *(uint **)(param_1 + 0x58));
        }
      }
      else if (bVar1) {
        do {
          uVar8 = (**(code **)(**(long **)(param_1 + 0x40) + 0x20))
                            (*(long **)(param_1 + 0x40),param_2,param_1 + 0x4e,1,*puVar5,0,1,1,
                             (byte)(param_4 >> 4) & 1);
          if ((uVar8 & 1) == 0) goto LAB_001fd034;
          lVar4 = *(long *)(param_1 + 0x18);
          uVar18 = *puVar5;
          uVar15 = *(undefined2 *)(param_1 + 0x4e);
          puVar20 = (undefined8 *)(lVar4 + 0x30);
          puVar11 = (undefined8 *)*puVar20;
          if ((undefined8 *)*puVar20 == (undefined8 *)0x0) {
            puVar19 = puVar20;
          }
          else {
            do {
              while (puVar9 = puVar11, puVar20 = puVar9, *(uint *)((long)puVar9 + 0x1c) <= uVar18) {
                if (uVar18 <= *(uint *)((long)puVar9 + 0x1c)) goto LAB_001fcbf4;
                puVar11 = (undefined8 *)puVar9[1];
                if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
                  puVar19 = puVar9 + 1;
                  goto LAB_001fcc8c;
                }
              }
              puVar11 = (undefined8 *)*puVar9;
              puVar19 = puVar9;
            } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
          }
LAB_001fcc8c:
          puVar9 = (undefined8 *)FUN_00187df4(0x28);
          *(uint *)((long)puVar9 + 0x1c) = uVar18;
          *(undefined2 *)(puVar9 + 4) = 0;
          puVar9[2] = puVar20;
          *puVar9 = 0;
          puVar9[1] = 0;
          *puVar19 = puVar9;
          puVar11 = puVar9;
          if (**(long **)(lVar4 + 0x28) != 0) {
            *(long *)(lVar4 + 0x28) = **(long **)(lVar4 + 0x28);
            puVar11 = (undefined8 *)*puVar19;
          }
          FUN_03876250(*(undefined8 *)(lVar4 + 0x30),puVar11);
          *(long *)(lVar4 + 0x38) = *(long *)(lVar4 + 0x38) + 1;
LAB_001fcbf4:
          *(undefined2 *)(puVar9 + 4) = uVar15;
          puVar5 = puVar5 + 1;
        } while (puVar5 != *(uint **)(param_1 + 0x58));
      }
    }
    puVar7 = PTR_DAT_04bcb910;
    if ((param_4 >> 2 & 1) != 0) {
      uVar18 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
      if (*PTR_DAT_04bcb908 == '\0') {
LAB_001fcd34:
        puVar14 = PTR_DAT_04bcbb78 + (ulong)uVar18 * 0x2a8 + 0x18;
        lVar4 = *(long *)(param_1 + 0x10);
        cVar12 = *PTR_DAT_04bcb908;
        if ((param_4 >> 6 & 1) != 0) goto LAB_001fcda8;
LAB_001fcd60:
        if (*(int *)(puVar14 + 0x140) == 0 || (param_4 & 0x20) != 0) goto LAB_001fcda8;
        plVar17 = *(long **)(param_1 + 0x40);
        uVar18 = *(uint *)(lVar4 + 8);
        puVar14 = PTR_DAT_04bcbb78;
joined_r0x001fcd80:
        if (cVar12 == '\0') {
LAB_001fce54:
          puVar13 = puVar14 + (ulong)uVar18 * 0x2a8 + 0x18;
        }
        else {
          puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar7);
          if (*puVar5 == 0) goto LAB_001fce54;
          puVar13 = (undefined *)
                    (*(long *)(puVar14 + (ulong)uVar18 * 0x2a8 + 0x10) + (ulong)*puVar5 * 0x148);
        }
        uVar8 = (**(code **)(*plVar17 + 0x20))
                          (plVar17,0,param_1 + 0x4c,1,*(undefined4 *)(puVar13 + 0x140),0,0,0,0);
        if ((uVar8 & 1) == 0) {
          return 0;
        }
      }
      else {
        puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        if (*puVar5 == 0) goto LAB_001fcd34;
        puVar14 = (undefined *)
                  (*(long *)(PTR_DAT_04bcbb78 + (ulong)uVar18 * 0x2a8 + 0x10) +
                  (ulong)*puVar5 * 0x148);
        lVar4 = *(long *)(param_1 + 0x10);
        cVar12 = *PTR_DAT_04bcb908;
        if ((param_4 >> 6 & 1) == 0) goto LAB_001fcd60;
LAB_001fcda8:
        puVar14 = PTR_DAT_04bcbb78;
        plVar17 = *(long **)(param_1 + 0x40);
        uVar18 = *(uint *)(lVar4 + 8);
        if (cVar12 == '\0') {
LAB_001fcddc:
          puVar13 = puVar14 + (ulong)uVar18 * 0x2a8 + 0x18;
        }
        else {
          puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar7);
          if (*puVar5 == 0) goto LAB_001fcddc;
          puVar13 = (undefined *)
                    (*(long *)(puVar14 + (ulong)uVar18 * 0x2a8 + 0x10) + (ulong)*puVar5 * 0x148);
        }
        uVar8 = (**(code **)(*plVar17 + 0x20))
                          (plVar17,param_2,param_1 + 0x4c,1,*(undefined4 *)(puVar13 + 0x140),0,0,0,
                           (param_4 & 0x60) != 0);
        if (((param_4 >> 5 & 1) != 0) && ((uVar8 & 1) == 0)) {
          return 0;
        }
        if ((uVar8 & 1) == 0) {
          cVar12 = *PTR_DAT_04bcb908;
          plVar17 = *(long **)(param_1 + 0x40);
          uVar18 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
          goto joined_r0x001fcd80;
        }
      }
      lVar4 = *(long *)(param_1 + 0x10);
      uVar18 = *(uint *)(lVar4 + 8);
      if (*PTR_DAT_04bcb908 == '\0') {
LAB_001fceec:
        uVar18 = *(uint *)(puVar14 + (ulong)uVar18 * 0x2a8 + 0x158);
        uVar15 = *(undefined2 *)(param_1 + 0x4c);
        puVar11 = *(undefined8 **)(lVar4 + 0x30);
        if (*(undefined8 **)(lVar4 + 0x30) == (undefined8 *)0x0) goto LAB_001fcf0c;
LAB_001fcf20:
        do {
          while (puVar9 = puVar11, puVar20 = puVar9, *(uint *)((long)puVar9 + 0x1c) <= uVar18) {
            if (uVar18 <= *(uint *)((long)puVar9 + 0x1c)) goto LAB_001fcf90;
            puVar11 = (undefined8 *)puVar9[1];
            if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
              puVar19 = puVar9 + 1;
              goto LAB_001fcf40;
            }
          }
          puVar11 = (undefined8 *)*puVar9;
          puVar19 = puVar9;
        } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
      }
      else {
        puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar7);
        if (*puVar5 == 0) goto LAB_001fceec;
        uVar18 = *(uint *)(*(long *)(puVar14 + (ulong)uVar18 * 0x2a8 + 0x10) +
                           (ulong)*puVar5 * 0x148 + 0x140);
        uVar15 = *(undefined2 *)(param_1 + 0x4c);
        puVar11 = *(undefined8 **)(lVar4 + 0x30);
        if (*(undefined8 **)(lVar4 + 0x30) != (undefined8 *)0x0) goto LAB_001fcf20;
LAB_001fcf0c:
        puVar20 = (undefined8 *)(lVar4 + 0x30);
        puVar19 = (undefined8 *)(lVar4 + 0x30);
      }
LAB_001fcf40:
      puVar9 = (undefined8 *)FUN_00187df4(0x28);
      *(uint *)((long)puVar9 + 0x1c) = uVar18;
      *(undefined2 *)(puVar9 + 4) = 0;
      puVar9[2] = puVar20;
      *puVar9 = 0;
      puVar9[1] = 0;
      *puVar19 = puVar9;
      puVar11 = puVar9;
      if (**(long **)(lVar4 + 0x28) != 0) {
        *(long *)(lVar4 + 0x28) = **(long **)(lVar4 + 0x28);
        puVar11 = (undefined8 *)*puVar19;
      }
      FUN_03876250(*(undefined8 *)(lVar4 + 0x30),puVar11);
      *(long *)(lVar4 + 0x38) = *(long *)(lVar4 + 0x38) + 1;
LAB_001fcf90:
      *(undefined2 *)(puVar9 + 4) = uVar15;
    }
    if ((param_4 & 1) == 0) {
      bVar3 = 1;
    }
    else {
      bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                        (*(long **)(param_1 + 0x18),param_3,0);
      bVar3 = bVar2 | (param_4 & 2) == 0;
      if (((param_4 >> 1 & 1) == 0) && ((bVar2 & 1) == 0)) {
        bVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),0,0);
      }
    }
    if (((param_4 >> 2 & 1) == 0) || ((bVar3 & 1) == 0)) {
      if ((~bVar3 & 1) != 0 || (param_4 & 4) != 0) goto LAB_001fd034;
    }
    else {
      uVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),0,0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
    }
    uVar10 = 1;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  else {
    lVar4 = FUN_00185a6c(0x1c0);
    if (lVar4 != 0) {
      FUN_001cd51c(lVar4,*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
    }
    *(long *)(param_1 + 0x18) = lVar4;
    FUN_001a4ff4(*(undefined8 *)(param_1 + 0x30),lVar4,1);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x98))(local_78);
    puVar7 = PTR_LAB_04bc0ee0;
    if (local_78[0] < 0) {
      puVar7 = (undefined *)0x0;
    }
    if (puVar7 != (undefined *)0x0) goto LAB_001fc8bc;
LAB_001fd034:
    uVar10 = 0;
  }
  return uVar10;
}

