
void FUN_024535b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *__src;
  undefined4 uVar9;
  undefined *local_a8;
  char *pcStack_a0;
  int local_98;
  undefined1 auStack_94 [31];
  undefined1 local_75;
  int local_70;
  float local_68;
  float fStack_64;
  float local_60;
  int *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_24;
  
  cVar3 = *(char *)(param_1 + 0x190c);
  local_58 = &local_24;
  local_50 = 0;
  uStack_48 = 6;
  fStack_64 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_24 = (uint)*(ushort *)(param_1 + 0x190a) << 0x10;
  local_68 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_60 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  uVar5 = FUN_02416248(param_1,&local_68);
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar6 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(undefined4 *)(puVar6 + 0x5d) = *(undefined4 *)(param_1 + 0x924);
    *(undefined1 *)((long)puVar6 + 0x2e4) = 1;
    uVar9 = *(undefined4 *)(param_1 + 0x928);
    *(undefined1 *)((long)puVar6 + 0x2e5) = 1;
    *(undefined4 *)((long)puVar6 + 0x2ec) = uVar9;
    uVar9 = *(undefined4 *)(param_1 + 0x92c);
    *(undefined1 *)((long)puVar6 + 0x2e6) = 1;
    *(undefined4 *)(puVar6 + 0x5e) = uVar9;
  }
  if (*(char *)(param_1 + 0x915) != '\0') {
    iVar4 = (**(code **)(*(long *)(param_1 + 0x900) + (ulong)*(byte *)(param_1 + 0x914) * 8))
                      (param_1 + 0x900);
    *(int *)(param_1 + 0x908) = iVar4;
    if ((*(char *)(param_1 + 0x915) != '\0') && (*(int *)(param_1 + 0x910) <= iVar4)) {
      if (*(int *)(param_1 + 0x178) == 0) {
        if ((*(uint *)(param_1 + 0x17cc) >> 0x17 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x17f8) = 0;
          *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x800000;
          *(undefined2 *)(param_1 + 0x1804) = 0x100;
          *(undefined4 *)(param_1 + 0x1800) = 0x3c;
        }
        if ((uVar5 & 1) != 0) {
          plVar8 = *(long **)(param_1 + 0x60);
          if (plVar8 == (long *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar4 = __cxa_guard_acquire(&DAT_052461c0);
              plVar8 = &DAT_05240280;
              if (iVar4 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              plVar8 = &DAT_05240280;
            }
          }
          (**(code **)(*plVar8 + 0x4e8))(plVar8,0);
        }
        param_1 = param_1 + 0x1ee8;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_a0 = "PhoneCallPrintServiceDelayFlag";
        local_a8 = puVar1;
        iVar4 = FUN_0274bce0(param_1,&local_a8);
        if (iVar4 == 0) {
          pcStack_a0 = "StandByPhoneCallPrintService";
          local_a8 = puVar1;
          iVar4 = FUN_0274bce0(param_1,&local_a8);
          if (iVar4 != 0) {
            lVar7 = *(long *)PTR_DAT_04bb2720;
            if (lVar7 == 0) {
              plVar8 = &DAT_055c04a0;
            }
            else {
              plVar8 = &DAT_055c04a0;
              if (*(long *)(lVar7 + 0x330) != 0) {
                puVar6 = (undefined8 *)
                         (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                   (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
                iVar4 = FUN_006bd550(*puVar6,0);
                plVar8 = (long *)PTR_DAT_04bc3a80;
                if (iVar4 != 0x758f7eaf) {
                  plVar8 = &DAT_055c04a0;
                }
              }
            }
            local_98 = 0x20;
            local_75 = 0;
            local_a8 = PTR_DAT_04bb2a08 + 0x10;
            pcStack_a0 = auStack_94;
            (**(code **)(*plVar8 + 0x18))(plVar8);
            __src = (undefined1 *)plVar8[1];
            if (auStack_94 != __src) {
              (**(code **)(*plVar8 + 0x18))(plVar8);
              lVar7 = 0;
              do {
                if (*(char *)(plVar8[1] + lVar7) == '\0') goto LAB_0245394c;
                lVar2 = plVar8[1] + lVar7;
                if (*(char *)(lVar2 + 1) == '\0') {
                  lVar7 = lVar7 + 1;
                  goto LAB_0245394c;
                }
                if (*(char *)(lVar2 + 2) == '\0') {
                  lVar7 = lVar7 + 2;
                  goto LAB_0245394c;
                }
                lVar7 = lVar7 + 3;
              } while (lVar7 != 0x80001);
              lVar7 = 0;
LAB_0245394c:
              iVar4 = (int)lVar7;
              if (local_98 <= (int)lVar7) {
                iVar4 = local_98 + -1;
              }
              memcpy(auStack_94,__src,(long)iVar4);
              auStack_94[iVar4] = 0;
            }
            local_70 = (int)plVar8[7];
            local_a8 = PTR_DAT_04bb2028 + 0x10;
            if ((local_70 == 0x3411ee5c) && (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) {
              FUN_0253e210(param_1);
            }
          }
        }
      }
      else {
        plVar8 = *(long **)(param_1 + 0x60);
        if (plVar8 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_052461c0);
            plVar8 = &DAT_05240280;
            if (iVar4 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar8 = &DAT_05240280;
          }
        }
        uVar5 = (**(code **)(*plVar8 + 0x100))(plVar8);
        if ((uVar5 & 1) != 0) {
          if ((cVar3 != '\0') && (uVar5 = FUN_02b66360(), (uVar5 & 1) != 0)) {
            FUN_02b667f0();
          }
          if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x11889761) {
            lVar7 = *(long *)PTR_DAT_04bb26a8;
            *(undefined4 *)(lVar7 + 0x11faac) = 0;
            *(undefined1 *)(lVar7 + 0x11fab4) = 1;
          }
          plVar8 = *(long **)(param_1 + 0x60);
          if (plVar8 == (long *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar4 = __cxa_guard_acquire(&DAT_052461c0);
              plVar8 = &DAT_05240280;
              if (iVar4 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              plVar8 = &DAT_05240280;
            }
          }
          (**(code **)(*plVar8 + 0x4e8))(plVar8,0);
        }
      }
    }
  }
  return;
}

