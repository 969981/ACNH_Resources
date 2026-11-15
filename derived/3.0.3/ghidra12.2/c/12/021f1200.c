
/* WARNING: Removing unreachable block (ram,0x021f13b0) */

void FUN_021f1200(undefined4 *param_1)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *local_68;
  char *local_60;
  undefined1 local_58;
  byte local_57;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar8 = PTR_DAT_04bbde00;
  if (((*PTR_DAT_04bbde00 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar9 != 0))
  {
    FUN_016cb6ac(PTR_DAT_04bbddf8);
    __cxa_guard_release(PTR_DAT_04bbde00);
  }
  puVar7 = PTR_DAT_04bbddf8;
  if (0 < (int)*(uint *)PTR_DAT_04bbddf8) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bbddf8 + 8) + uVar11 * 4) == 0) goto LAB_021f1268;
      uVar11 = uVar11 + 1;
    } while (*(uint *)PTR_DAT_04bbddf8 != uVar11);
  }
  uVar11 = 0;
LAB_021f1268:
  *param_1 = (int)uVar11;
  local_48 = 0;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar9 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  uVar11 = FUN_02b64e40(&local_48,*(undefined4 *)(puVar13 + 7));
  puVar6 = PTR_DAT_04bb46b0;
  if ((uVar11 & 1) != 0) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,local_48);
    lVar12 = *(long *)PTR_DAT_04bb46b0;
    if (lVar12 != 0) {
      puVar13 = *(undefined8 **)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
        lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
        if (lVar12 == 0) {
          return;
        }
        lVar12 = lVar12 + 0x70;
      }
      else {
        if (puVar13 == (undefined8 *)0x0) {
          return;
        }
        if ((long *)puVar13[0x26] == (long *)0x0) {
          return;
        }
        lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
        if (lVar12 == 0) {
          return;
        }
      }
      if ((uint)local_68 < 10) {
        lVar2 = lVar12 + 0x1962d8 + ((ulong)local_68 & 0xffffffff) * 0x10d8;
        if (9 < (uint)local_68) {
          lVar2 = lVar12 + 0x1962d8;
        }
        if (*(long **)(lVar2 + 0x28) == (long *)0x0) {
          uVar11 = 0;
        }
        else {
          puVar13 = (undefined8 *)**(long **)(lVar2 + 0x28);
          uVar11 = 0;
          if (puVar13 != (undefined8 *)0x0) {
            uVar11 = (**(code **)*puVar13)();
          }
        }
        local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
        cVar4 = *(char *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1c4);
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
           (puVar13 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar13 != (undefined8 *)0x0))
        {
          (**(code **)*puVar13)();
        }
        local_4c = (int)cVar4;
        if (local_4c != -1) {
          local_68 = PTR_DAT_04bb2020 + 0x10;
          local_60 = "NpcInteriorCoordinate";
          iVar9 = FUN_02743000(&local_68);
          if (iVar9 != 0) {
            sVar5 = *(short *)PTR_DAT_04bbdeb0;
            if (sVar5 != -1) {
              local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1d);
              puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
              if (0xff < (uint)(int)sVar5) {
                puVar1 = (uint *)PTR_DAT_04bc39f8;
              }
              if ((*puVar1 >> 0x1d & 1) != 0) {
                bVar3 = *(byte *)(*(long *)PTR_DAT_04bb2800 + 0x2684);
                if (((*puVar8 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar9 != 0)) {
                  FUN_016cb6ac(PTR_DAT_04bbddf8);
                  __cxa_guard_release(PTR_DAT_04bbde00);
                }
                if ((int)*(uint *)puVar7 < 1) {
                  return;
                }
                uVar11 = 0;
                do {
                  if (*(uint *)(*(long *)(puVar7 + 8) + uVar11 * 4) == (uint)bVar3) {
                    *param_1 = (int)uVar11;
                    return;
                  }
                  uVar11 = uVar11 + 1;
                } while (*(uint *)puVar7 != uVar11);
                return;
              }
            }
            uVar11 = FUN_02660600((int)cVar4);
            if ((uVar11 & 1) != 0) {
              if (9 < (uint)(int)cVar4) {
                return;
              }
              lVar12 = *(long *)puVar6;
              if (lVar12 == 0) {
                return;
              }
              lVar12 = (**(code **)(*(long *)**(undefined8 **)(lVar12 + 0x10) + 0x38))();
              if (lVar12 == 0) {
                return;
              }
              lVar12 = lVar12 + (ulong)(uint)(int)cVar4 * 0x888;
              local_60 = (char *)(lVar12 + 0x27f8b0);
              local_58 = 1;
              if (*(long **)(lVar12 + 0x27f8d8) == (long *)0x0) {
                local_57 = 0;
              }
              else {
                puVar13 = (undefined8 *)**(long **)(lVar12 + 0x27f8d8);
                local_57 = 0;
                if (puVar13 != (undefined8 *)0x0) {
                  local_57 = (**(code **)*puVar13)();
                }
              }
              local_57 = local_57 & 1;
              local_68 = PTR_DAT_04bb80e8 + 0x10;
              FUN_021f1740(param_1,*(undefined1 *)
                                    (*(long *)(lVar12 + 0x27f8c0) + *(long *)(lVar12 + 0x27f8b8) +
                                    0x1100));
              FUN_02640184(&local_68);
              return;
            }
          }
          uVar11 = FUN_02663fa0(&local_4c);
          if ((uVar11 & 1) != 0) {
            local_44 = 0;
            uVar11 = FUN_02b67a30(&local_44,(int)cVar4);
            if ((uVar11 & 1) != 0) {
              local_68 = (undefined *)CONCAT44(local_68._4_4_,local_44);
              lVar12 = *(long *)puVar6;
              if (lVar12 != 0) {
                puVar13 = *(undefined8 **)(lVar12 + 0x10);
                if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
                  lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
                  if (lVar12 == 0) {
                    return;
                  }
                  lVar12 = lVar12 + 0x70;
                }
                else {
                  if (puVar13 == (undefined8 *)0x0) {
                    return;
                  }
                  if ((long *)puVar13[0x26] == (long *)0x0) {
                    return;
                  }
                  lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
                  if (lVar12 == 0) {
                    return;
                  }
                }
                if ((uint)local_68 < 10) {
                  lVar2 = lVar12 + 0x1962d8 + ((ulong)local_68 & 0xffffffff) * 0x10d8;
                  if (9 < (uint)local_68) {
                    lVar2 = lVar12 + 0x1962d8;
                  }
                  if ((*(long **)(lVar2 + 0x878) == (long *)0x0) ||
                     (puVar13 = (undefined8 *)**(long **)(lVar2 + 0x878),
                     puVar13 == (undefined8 *)0x0)) {
                    uVar10 = 1;
                  }
                  else {
                    uVar10 = (**(code **)*puVar13)();
                    uVar10 = uVar10 ^ 1;
                  }
                  bVar3 = *(byte *)(*(long *)(lVar2 + 0x860) + *(long *)(lVar2 + 0x858) + 0x1104);
                  if (((*puVar8 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar9 != 0)) {
                    FUN_016cb6ac(PTR_DAT_04bbddf8);
                    __cxa_guard_release(PTR_DAT_04bbde00);
                  }
                  if (0 < (int)*(uint *)puVar7) {
                    uVar11 = 0;
                    do {
                      if (*(uint *)(*(long *)(puVar7 + 8) + uVar11 * 4) == (uint)bVar3) {
                        *param_1 = (int)uVar11;
                        break;
                      }
                      uVar11 = uVar11 + 1;
                    } while (*(uint *)puVar7 != uVar11);
                  }
                  if ((((uVar10 & 1) == 0) && (*(long *)(lVar2 + 0x878) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar2 + 0x878) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

