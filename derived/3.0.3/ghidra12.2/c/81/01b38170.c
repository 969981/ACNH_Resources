
uint FUN_01b38170(undefined4 *param_1,char *param_2,CalendarTime *param_3)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CalendarTime CVar5;
  ushort uVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  CalendarTime CVar18;
  long lVar19;
  long *plVar20;
  undefined8 local_80;
  undefined4 local_78;
  
  puVar7 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar9 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1), lVar9 == 0)) {
    uVar8 = 0;
    goto LAB_01b387d0;
  }
  if ((*(long **)(lVar9 + 0x17bb0) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x17bb0), puVar10 == (undefined8 *)0x0)) {
    uVar11 = 0;
    CVar18 = (CalendarTime)0x0;
    if (param_3[0x2a] != (CalendarTime)0x0) goto LAB_01b38200;
LAB_01b383d0:
    if ((CVar18 != (CalendarTime)0x0) || (param_3[0x2b] != (CalendarTime)0x0)) goto LAB_01b383dc;
  }
  else {
    uVar11 = (**(code **)*puVar10)();
    uVar11 = uVar11 & 0xffffffff;
    if (param_3[0x2a] == (CalendarTime)0x0) {
      CVar18 = (CalendarTime)0x0;
      goto LAB_01b383d0;
    }
LAB_01b38200:
    lVar19 = 0;
    do {
      pcVar2 = param_2 + 0x15ae0 + (ulong)*(uint *)(param_2 + lVar19 + 0x1f220) * 0x3c8;
      if (0x27 < *(uint *)(param_2 + lVar19 + 0x1f220)) {
        pcVar2 = param_2 + 0x15ae0;
      }
      if (*pcVar2 == '\0') goto LAB_01b38230;
      if (pcVar2[0xb8] != '\0') goto LAB_01b382dc;
      piVar1 = (int *)(*(long *)(lVar9 + 0x17b98) + *(long *)(lVar9 + 0x17b90));
      if ((*(int *)(pcVar2 + 0x7c) == piVar1[7]) &&
         ((*(long *)(piVar1 + 8) == *(long *)(pcVar2 + 0x80) &&
          *(long *)(piVar1 + 10) == *(long *)(pcVar2 + 0x88)) &&
          piVar1[0xc] == *(int *)(pcVar2 + 0x90))) {
        if ((*(short *)(pcVar2 + 100) == 0) || ((short)piVar1[1] == 0)) {
          if (*(int *)(pcVar2 + 0x60) == *piVar1) goto LAB_01b382dc;
        }
        else if ((*(int *)(pcVar2 + 0x60) == *piVar1) &&
                ((*(long *)(piVar1 + 1) == *(long *)(pcVar2 + 100) &&
                 *(long *)(piVar1 + 3) == *(long *)(pcVar2 + 0x6c)) &&
                 piVar1[5] == *(int *)(pcVar2 + 0x74))) {
LAB_01b382dc:
          uVar6 = *(ushort *)(param_3 + 0x22);
          CVar18 = param_3[0x24];
          CVar5 = param_3[0x25];
          uVar3 = *param_1;
          nn::time::IsValidDate((uint)uVar6,(uint)(byte)CVar18,(uint)(byte)CVar5);
          lVar19 = *(long *)PTR_DAT_04bb2698;
          if (lVar19 == 0) {
            puVar10 = malloc(0x20);
joined_r0x01b38370:
            if (puVar10 != (undefined8 *)0x0) {
              puVar10[2] = 0;
              puVar10[3] = 0;
              *(undefined4 *)(puVar10 + 1) = uVar3;
              *(uint *)((long)puVar10 + 0xc) =
                   (uint)(byte)CVar5 << 0x18 | (uint)(byte)CVar18 << 0x10 | (uint)uVar6;
              *puVar10 = &PTR_LAB_04a37c60;
              plVar20 = *(long **)PTR_DAT_04bb4fa8;
              lVar19 = *plVar20;
              plVar12 = (long *)((long)*(int *)((long)plVar20 + 0x14) + (long)puVar10);
              *plVar20 = (long)plVar12;
              *plVar12 = lVar19;
              plVar12[1] = (long)plVar20;
              if (lVar19 != 0) {
                *(long **)(lVar19 + 8) = plVar12;
              }
              *(int *)(plVar20 + 2) = (int)plVar20[2] + 1;
            }
          }
          else {
            plVar12 = *(long **)PTR_DAT_04bc0580;
            if (plVar12 != (long *)0x0) {
LAB_01b3834c:
              puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x20,8);
              goto joined_r0x01b38370;
            }
            lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar12 = (long *)(lVar19 + 8);
            if (lVar13 != 0) {
              plVar12 = (long *)(lVar13 + 0xa8);
            }
            plVar12 = (long *)*plVar12;
            if (plVar12 != (long *)0x0) goto LAB_01b3834c;
          }
          CVar18 = param_3[0x2a];
          goto LAB_01b383d0;
        }
      }
LAB_01b38230:
      lVar19 = lVar19 + 4;
    } while (lVar19 != 0xa0);
LAB_01b383dc:
    lVar19 = 0;
    do {
      pcVar2 = param_2 + (ulong)*(uint *)(param_2 + lVar19 + 0x15950) * 0x374;
      if (99 < *(uint *)(param_2 + lVar19 + 0x15950)) {
        pcVar2 = param_2;
      }
      if (*pcVar2 != '\0') {
        if (pcVar2[0xb8] != '\0') goto LAB_01b384ac;
        piVar1 = (int *)(*(long *)(lVar9 + 0x17b98) + *(long *)(lVar9 + 0x17b90));
        if ((*(int *)(pcVar2 + 0x7c) == piVar1[7]) &&
           ((*(long *)(piVar1 + 8) == *(long *)(pcVar2 + 0x80) &&
            *(long *)(piVar1 + 10) == *(long *)(pcVar2 + 0x88)) &&
            piVar1[0xc] == *(int *)(pcVar2 + 0x90))) {
          if ((*(short *)(pcVar2 + 100) == 0) || ((short)piVar1[1] == 0)) {
            if (*(int *)(pcVar2 + 0x60) == *piVar1) goto LAB_01b384ac;
          }
          else if ((*(int *)(pcVar2 + 0x60) == *piVar1) &&
                  ((*(long *)(piVar1 + 1) == *(long *)(pcVar2 + 100) &&
                   *(long *)(piVar1 + 3) == *(long *)(pcVar2 + 0x6c)) &&
                   piVar1[5] == *(int *)(pcVar2 + 0x74))) {
LAB_01b384ac:
            uVar6 = *(ushort *)(param_3 + 0x22);
            CVar18 = param_3[0x24];
            CVar5 = param_3[0x25];
            uVar3 = *param_1;
            nn::time::IsValidDate((uint)uVar6,(uint)(byte)CVar18,(uint)(byte)CVar5);
            lVar19 = *(long *)PTR_DAT_04bb2698;
            if (lVar19 == 0) {
              puVar10 = malloc(0x20);
            }
            else {
              plVar12 = *(long **)PTR_DAT_04bc0580;
              if (plVar12 == (long *)0x0) {
                lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                plVar12 = (long *)(lVar19 + 8);
                if (lVar13 != 0) {
                  plVar12 = (long *)(lVar13 + 0xa8);
                }
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) break;
              }
              puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x20,8);
            }
            if (puVar10 != (undefined8 *)0x0) {
              puVar10[2] = 0;
              puVar10[3] = 0;
              *(undefined4 *)(puVar10 + 1) = uVar3;
              *(uint *)((long)puVar10 + 0xc) =
                   (uint)(byte)CVar5 << 0x18 | (uint)(byte)CVar18 << 0x10 | (uint)uVar6;
              *puVar10 = &PTR_LAB_04a37cb0;
              plVar20 = *(long **)PTR_DAT_04bb4fa8;
              lVar19 = *plVar20;
              plVar12 = (long *)((long)*(int *)((long)plVar20 + 0x14) + (long)puVar10);
              *plVar20 = (long)plVar12;
              *plVar12 = lVar19;
              plVar12[1] = (long)plVar20;
              if (lVar19 != 0) {
                *(long **)(lVar19 + 8) = plVar12;
              }
              *(int *)(plVar20 + 2) = (int)plVar20[2] + 1;
            }
            break;
          }
        }
      }
      lVar19 = lVar19 + 4;
    } while (lVar19 != 400);
  }
  lVar19 = *(long *)puVar7;
  if ((lVar19 != 0) && (lVar19 = FUN_026eec4c(lVar19,*param_1), lVar19 != 0)) {
    lVar13 = lVar19 + 0x194b0;
    if (*(long *)(lVar19 + 0x194b8) == 0) {
      lVar13 = *(long *)(*(long *)puVar7 + 0x20);
    }
    if ((*(long **)(lVar13 + 0x8410) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar13 + 0x8410), puVar10 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar10)();
      uVar8 = uVar8 ^ 1;
    }
    lVar19 = *(long *)(lVar13 + 0x83f8) + *(long *)(lVar13 + 0x83f0);
    if ((*(char *)(lVar19 + 0x438) != '\0') &&
       (uVar14 = nn::time::IsValidDate
                           ((uint)*(ushort *)(lVar19 + 0x800),(uint)*(byte *)(lVar19 + 0x802),
                            (uint)*(byte *)(lVar19 + 0x803)), (uVar14 & 1) != 0)) {
      uVar15 = FUN_0272eca4((undefined4 *)(lVar19 + 0x800),1);
      local_80._7_1_ = (undefined1)((ulong)uVar15 >> 0x38);
      local_80._0_7_ = (uint7)CONCAT24(9,(int)uVar15);
      lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
      lVar17 = nn::time::ToPosixTimeFromUtc(param_3);
      if (lVar16 <= lVar17) {
        nn::time::ToPosixTimeFromUtc(param_3);
        uVar3 = *param_1;
        uVar4 = *(undefined4 *)(lVar19 + 0x800);
        lVar19 = *(long *)PTR_DAT_04bb2698;
        if (lVar19 == 0) {
          puVar10 = malloc(0x20);
        }
        else {
          plVar12 = *(long **)PTR_DAT_04bc0580;
          if (plVar12 == (long *)0x0) {
            lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar12 = (long *)(lVar19 + 8);
            if (lVar16 != 0) {
              plVar12 = (long *)(lVar16 + 0xa8);
            }
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_01b38718;
          }
          puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x20,8);
        }
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar10 + 1) = uVar3;
          *(undefined4 *)((long)puVar10 + 0xc) = uVar4;
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = &PTR_LAB_04a37d00;
          plVar20 = *(long **)PTR_DAT_04bb4fa8;
          lVar19 = *plVar20;
          plVar12 = (long *)((long)*(int *)((long)plVar20 + 0x14) + (long)puVar10);
          *plVar20 = (long)plVar12;
          *plVar12 = lVar19;
          plVar12[1] = (long)plVar20;
          if (lVar19 != 0) {
            *(long **)(lVar19 + 8) = plVar12;
          }
          *(int *)(plVar20 + 2) = (int)plVar20[2] + 1;
        }
      }
    }
LAB_01b38718:
    if ((((uVar8 & 1) == 0) && (*(long *)(lVar13 + 0x8410) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x8410) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  local_78 = *param_1;
  local_80 = &PTR_FUN_04a37c38;
  lVar19 = *(long *)PTR_DAT_04bb4fa8;
  if (*(long *)(lVar19 + 8) == lVar19) {
    uVar8 = 0;
  }
  else {
    lVar16 = (long)*(int *)(lVar19 + 0x14);
    lVar13 = *(long *)(lVar19 + 8) - lVar16;
    do {
      uVar8 = (*(code *)*local_80)(&local_80,lVar13);
      if ((uVar8 & 1) != 0) break;
      lVar13 = *(long *)(lVar13 + lVar16 + 8) - lVar16;
    } while (lVar13 != lVar19 - lVar16);
  }
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x17bb0) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x17bb0) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
LAB_01b387d0:
  return uVar8 & 1;
}

