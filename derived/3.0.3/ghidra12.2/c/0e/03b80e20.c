
/* WARNING: Removing unreachable block (ram,0x03b80ea8) */
/* WARNING: Removing unreachable block (ram,0x03b81024) */

void FUN_03b80e20(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *local_70;
  char *local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  lVar1 = param_1 + 8;
  if (*(long *)(param_1 + 0x10) != lVar1) {
    lVar18 = (long)*(int *)(param_1 + 0x1c);
    plVar14 = (long *)(*(long *)(param_1 + 0x10) - lVar18);
    if ((param_2 & 1) == 0) {
      do {
        if ((short *)plVar14[0xd] != (short *)0x0) {
          local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
          sVar4 = *(short *)plVar14[0xd];
          if (sVar4 != -1) {
            uVar17 = *(undefined8 *)PTR_DAT_04bd1e70;
            uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
            FUN_03b51680(uVar17,sVar4,uVar7);
            plVar14[0xd] = 0;
          }
        }
        plVar14 = (long *)(*(long *)((long)plVar14 + lVar18 + 8) + -lVar18);
      } while (plVar14 != (long *)(lVar1 - lVar18));
    }
    else {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        lVar16 = plVar14[0xd];
        if (lVar16 != 0) {
          local_68 = "FinalMix";
          plVar15 = (long *)(lVar16 + 8);
          local_70 = puVar2;
          (**(code **)(*plVar15 + 0x18))(plVar15);
          (**(code **)(*plVar15 + 0x18))(plVar15);
          pcVar10 = *(char **)(lVar16 + 0x10);
          (**(code **)(local_70 + 0x18))(&local_70);
          if (pcVar10 != local_68) {
            pcVar10 = *(char **)(lVar16 + 0x10);
            if (*pcVar10 == *local_68) {
              if (*pcVar10 != '\0') {
                uVar9 = 0;
                do {
                  uVar8 = uVar9;
                  if (pcVar10[uVar8 + 1] != local_68[uVar8 + 1]) goto LAB_03b80fc0;
                  if (pcVar10[uVar8 + 1] == '\0') goto joined_r0x03b80fb8;
                  if (pcVar10[uVar8 + 2] != local_68[uVar8 + 2]) goto LAB_03b80fc0;
                  if (pcVar10[uVar8 + 2] == '\0') {
                    uVar8 = uVar8 + 1;
                    goto joined_r0x03b80fb8;
                  }
                  if ((uVar8 == 0x7fffe) || (pcVar10[uVar8 + 3] != local_68[uVar8 + 3]))
                  goto LAB_03b80fc0;
                  uVar9 = uVar8 + 3;
                } while (pcVar10[uVar8 + 3] != '\0');
                uVar8 = uVar8 + 2;
joined_r0x03b80fb8:
                if (0x7ffff < uVar8) goto LAB_03b80fc0;
              }
            }
            else {
LAB_03b80fc0:
              local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
              sVar4 = *(short *)plVar14[0xd];
              if (sVar4 != -1) {
                uVar17 = *(undefined8 *)PTR_DAT_04bd1e70;
                uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
                FUN_03b51680(uVar17,sVar4,uVar7);
                plVar14[0xd] = 0;
              }
            }
          }
        }
        plVar14 = (long *)(*(long *)((long)plVar14 + lVar18 + 8) + -lVar18);
      } while (plVar14 != (long *)(lVar1 - lVar18));
    }
  }
  FUN_03b510b0(*(undefined8 *)PTR_DAT_04bd1e70);
  lVar18 = *(long *)PTR_DAT_04bb29d0;
  nn::os::ConvertToTimeSpan();
  nn::os::SleepThread();
  lVar12 = (long)*(int *)(param_1 + 0x1c);
  plVar14 = (long *)(*(long *)(param_1 + 0x10) - lVar12);
  lVar16 = -lVar12;
  plVar15 = (long *)(lVar1 - lVar12);
  if ((param_2 & 1) == 0) {
    if (plVar14 != plVar15) {
      do {
        lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14);
        if ((*(byte *)(lVar11 + 8) & 1) == 0) {
          do {
            plVar14 = (long *)(lVar16 + *(long *)((long)plVar14 + (long)(int)lVar12 + 8));
            if (plVar15 == plVar14) goto LAB_03b81284;
            lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14);
          } while ((*(byte *)(lVar11 + 8) & 1) == 0);
        }
        nn::os::ConvertToTimeSpan(lVar18 / 200);
        nn::os::SleepThread();
        lVar12 = (long)*(int *)(param_1 + 0x1c);
        lVar16 = -lVar12;
        plVar14 = (long *)(*(long *)(param_1 + 0x10) - lVar12);
        plVar15 = (long *)(lVar1 - lVar12);
      } while (*(long *)(param_1 + 0x10) != lVar1);
    }
  }
  else if (plVar14 != plVar15) {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
LAB_03b81140:
    do {
      lVar11 = plVar14[0xd];
      if (lVar11 == 0) {
LAB_03b81150:
        lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14);
        if ((*(byte *)(lVar11 + 8) & 1) != 0) goto LAB_03b81248;
      }
      else {
        local_68 = "FinalMix";
        plVar13 = (long *)(lVar11 + 8);
        local_70 = puVar2;
        (**(code **)(*plVar13 + 0x18))(plVar13);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        pcVar10 = *(char **)(lVar11 + 0x10);
        (**(code **)(local_70 + 0x18))(&local_70);
        if (pcVar10 != local_68) {
          uVar9 = 0;
          bVar6 = true;
          lVar11 = *(long *)(lVar11 + 0x10) + 1;
          do {
            lVar3 = lVar11 + uVar9;
            cVar5 = *(char *)(lVar3 + -1);
            if (cVar5 != local_68[uVar9]) break;
            if (cVar5 == '\0') {
              if (bVar6) goto LAB_03b8116c;
              break;
            }
            cVar5 = *(char *)(lVar11 + uVar9);
            if (cVar5 != local_68[uVar9 + 1]) break;
            if (cVar5 == '\0') goto LAB_03b8116c;
            cVar5 = *(char *)(lVar3 + 1);
            if (cVar5 != local_68[uVar9 + 2]) break;
            if (cVar5 == '\0') goto LAB_03b8116c;
            bVar6 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          goto LAB_03b81150;
        }
      }
LAB_03b8116c:
      plVar14 = (long *)(lVar16 + *(long *)((long)plVar14 + (long)(int)lVar12 + 8));
      if (plVar15 == plVar14) break;
    } while( true );
  }
LAB_03b81284:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  return;
LAB_03b81248:
  nn::os::ConvertToTimeSpan(lVar18 / 200);
  nn::os::SleepThread();
  lVar12 = (long)*(int *)(param_1 + 0x1c);
  lVar16 = -lVar12;
  plVar14 = (long *)(*(long *)(param_1 + 0x10) - lVar12);
  plVar15 = (long *)(lVar1 - lVar12);
  if (*(long *)(param_1 + 0x10) == lVar1) goto LAB_03b81284;
  goto LAB_03b81140;
}

