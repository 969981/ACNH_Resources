
void FUN_039ff780(long param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined *puVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined *local_80;
  char *local_78;
  undefined *local_70;
  char *local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "MiiFace";
  local_70 = puVar2;
  if (*(long *)(param_1 + 0x20) != param_1 + 0x18) {
    lVar7 = (long)*(int *)(param_1 + 0x2c);
    lVar15 = *(long *)(param_1 + 0x20) - lVar7;
    do {
      if (*(short *)(*(long *)(lVar15 + 0x20) + 0xdc) != 0) {
        uVar10 = 0;
        do {
          lVar6 = *(long *)(lVar15 + 0x28);
          lVar12 = lVar6 + uVar10 * 0x430;
          local_78 = (char *)(*(long *)(*(long *)(lVar12 + 0x10) + 8) + 2);
          local_80 = puVar2;
          (**(code **)(local_70 + 0x18))(&local_70);
          (**(code **)(local_70 + 0x18))(&local_70);
          pcVar3 = local_68;
          (**(code **)(local_80 + 0x18))(&local_80);
          if (pcVar3 != local_78) {
            uVar8 = 0;
            bVar4 = true;
            do {
              if (local_68[uVar8] != local_78[uVar8]) break;
              if (local_68[uVar8] == '\0') {
                if (bVar4) goto LAB_039ff858;
                break;
              }
              if (local_68[uVar8 + 1] != local_78[uVar8 + 1]) break;
              if (local_68[uVar8 + 1] == '\0') goto LAB_039ff858;
              if (local_68[uVar8 + 2] != local_78[uVar8 + 2]) break;
              if (local_68[uVar8 + 2] == '\0') goto LAB_039ff858;
              bVar4 = uVar8 < 0x7fffe;
              uVar8 = uVar8 + 3;
            } while (uVar8 != 0x80001);
            plVar16 = (long *)(lVar6 + uVar10 * 0x430 + 0x10);
            if (*(short *)(*plVar16 + 0x6c) == 0) {
              iVar9 = 0;
              if (*(short *)(*plVar16 + 0x6a) != 0) goto LAB_039ff9d0;
LAB_039ffa28:
              iVar11 = 0;
            }
            else {
              uVar8 = 0;
              iVar9 = 0;
              uVar13 = *(undefined8 *)(lVar15 + 0xa8);
              lVar14 = 0x18c;
              do {
                FUN_039b7fd0(lVar12,uVar8 & 0xffffffff,0,0,param_2,uVar13,param_3);
                uVar8 = uVar8 + 1;
                piVar1 = (int *)(*(long *)(lVar6 + uVar10 * 0x430 + 0x18) + lVar14);
                lVar14 = lVar14 + 0x198;
                iVar9 = *piVar1 + iVar9;
              } while (uVar8 < *(ushort *)(*plVar16 + 0x6c));
              if (*(short *)(*plVar16 + 0x6a) == 0) goto LAB_039ffa28;
LAB_039ff9d0:
              lVar12 = 0;
              uVar8 = 0;
              iVar11 = 0;
              do {
                iVar5 = FUN_039b8750(*(long *)(lVar6 + uVar10 * 0x430 + 0x20) + lVar12);
                uVar8 = uVar8 + 1;
                iVar11 = iVar5 + iVar11;
                lVar12 = lVar12 + 0x1118;
              } while (uVar8 < *(ushort *)(*plVar16 + 0x6a));
            }
            lVar6 = lVar6 + uVar10 * 0x430;
            *(int *)(lVar6 + 0x428) = iVar9;
            *(int *)(lVar6 + 0x424) = iVar11;
          }
LAB_039ff858:
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(*(long *)(lVar15 + 0x20) + 0xdc));
      }
      lVar15 = *(long *)(lVar15 + lVar7 + 8) - lVar7;
    } while (lVar15 != (param_1 + 0x18) - lVar7);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
}

