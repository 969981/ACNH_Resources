
ulong FUN_014ec5b0(ulong param_1,byte param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  long *plVar13;
  char local_64 [4];
  undefined1 auStack_60 [16];
  uint *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar8 = param_1;
  if ((*(int *)(param_1 + 0x18) == 1) && (lVar9 = *(long *)PTR_DAT_04bb27c0, lVar9 != 0)) {
    uVar4 = *(uint *)(param_1 + 0x8c);
    if ((uVar4 == 0) ||
       (((plVar13 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0 ||
         ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar4)))) {
      plVar13 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar2;
      uVar8 = (**(code **)(*plVar7 + 0x60))();
      if ((int)uVar8 < 0x11) {
        uVar4 = 0;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_014ec680;
        uVar4 = 5U >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_014ec680:
      uVar4 = 1;
    }
    if (plVar13 != (long *)0x0) {
      lVar9 = plVar13[0x2a];
      uVar5 = *(uint *)(plVar13 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar8 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb5920);
      if ((uVar8 & 1) != 0) {
        if ((int)lVar9 != 1) {
          uVar4 = 1;
        }
        if ((uVar4 == 0) && ((uVar5 >> 4 & 1) != 0)) {
          *(byte *)((long)plVar13 + 0x984) = param_2 & 1;
          FUN_0147d8f0(plVar13,5,param_2 & 1,0);
          FUN_0369fe54(*(undefined8 *)PTR_DAT_04bc3a50,param_1 + 0x60);
          if (((param_2 & 1) == 0) || (uVar8 = FUN_014e7d1c(param_1), (uVar8 & 1) == 0)) {
            uVar4 = 1;
          }
          else if (*(int *)(param_1 + 0xe8) == 0) {
            uVar4 = 1;
          }
          else {
            plVar13 = *(long **)(param_1 + 0xf0);
            lVar9 = (long)*(int *)(param_1 + 0xe8) << 3;
            uVar4 = 1;
            do {
              plVar7 = (long *)FUN_014e7558(uVar8,*(undefined4 *)(*plVar13 + 0x14));
              uVar8 = 0;
              if (plVar7 != (long *)0x0) {
                uVar8 = (**(code **)(*plVar7 + 0x3b8))();
                if ((uVar8 & 1) == 0) {
                  uVar8 = (**(code **)(*plVar7 + 0x3d0))(plVar7);
                  uVar4 = 0;
                }
                else {
                  uVar8 = (**(code **)(*plVar7 + 0x3c0))(plVar7);
                  uVar4 = uVar4 & (uint)uVar8;
                }
              }
              plVar13 = plVar13 + 1;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
          goto LAB_014ecaf4;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    plVar13 = (long *)FUN_014ba988(param_1 + 0x90);
    uVar8 = 0;
    if (plVar13 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar13 + 0xb8))();
      local_48 = *(undefined4 *)(param_1 + 0x60);
      uStack_44 = *(undefined4 *)(param_1 + 100);
      lVar9 = *(long *)PTR_DAT_04bbbc68;
      if (((((lVar9 != 0) && (*(long *)(lVar9 + 0xb0) != 0)) &&
           (*(long *)(*(long *)(lVar9 + 0xb0) + 8) != 0)) &&
          ((*(long *)(lVar9 + 0x488) != 0 && (*(long *)(*(long *)(lVar9 + 0x488) + 8) != 0)))) &&
         ((*(long *)(lVar9 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar9 + 0x2b0) + 8) != 0)))) {
        uVar5 = FUN_0277d6c4(&local_48);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          FUN_0124c030(auStack_60,&local_48);
          uVar8 = FUN_0123d890(local_50,4);
          puVar3 = PTR_DAT_04bbbc78;
          puVar2 = PTR_DAT_04bbbc70;
          if (((uVar8 & 1) != 0) && ((local_50 != (uint *)0x0 && (uVar5 = *local_50, uVar5 != 0))))
          {
            cVar10 = *PTR_DAT_04bbbc70;
            do {
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *(undefined8 *)puVar3 = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                *puVar2 = 1;
                *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
                *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
                uVar5 = *local_50;
              }
              else {
                uVar1 = *(uint *)(puVar3 + 0x4c);
                if (-1 < (int)uVar1) {
                  if (((char *)((ulong)uVar1 + (long)local_50) != (char *)0x0) &&
                     (*(char *)((ulong)uVar1 + (long)local_50) == '\x04')) goto LAB_014eca4c;
                  break;
                }
                if (uVar1 != 0xffffffff) break;
              }
              puVar11 = (uint *)(ulong)uVar5;
              if ((puVar11 == (uint *)0x0) || (local_50 == puVar11)) break;
              lVar9 = 0xc;
              if (*(char *)((long)local_50 + (10 - (long)puVar11)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)local_50 + (lVar9 - (long)puVar11);
              if (lVar9 == 0) break;
              uVar8 = (ulong)*(ushort *)((long)local_50 + (8 - (long)puVar11));
              *(undefined4 *)(puVar3 + 0x4c) = 0xfffffffe;
              if (uVar8 == 0) break;
              piVar12 = (int *)(lVar9 + 4);
              while (piVar12[-1] != -0xa58ccc9) {
                piVar12 = piVar12 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_014ec994;
              }
              iVar6 = 0;
              if (*piVar12 != -1) {
                iVar6 = *piVar12;
              }
              *(int *)(puVar3 + 0x4c) = iVar6;
              uVar5 = *local_50;
              if (uVar5 == 0) break;
            } while( true );
          }
LAB_014ec994:
          local_64[0] = '\0';
          FUN_01242280(&local_48,local_64);
          if (local_64[0] == '\0') {
            local_64[0] = '\0';
            FUN_01242280(&local_48,local_64);
            if (local_64[0] == '\0') {
              local_64[0] = '\0';
              FUN_01242280(&local_48,local_64);
              if (local_64[0] == '\0') {
                local_64[0] = '\0';
                FUN_01242280(&local_48,local_64);
                if (local_64[0] == '\0') {
                  local_64[0] = '\0';
                  FUN_01242280(&local_48,local_64);
                  if (local_64[0] == '\0') {
                    local_64[0] = '\0';
                    FUN_01242280(&local_48,local_64);
                    if (local_64[0] == '\0') {
                      local_64[0] = '\0';
                      FUN_01242280(&local_48,local_64);
                      if (local_64[0] == '\0') {
                        local_64[0] = '\0';
                        FUN_01242280(&local_48,local_64);
                      }
                    }
                  }
                }
              }
            }
          }
LAB_014eca4c:
          FUN_0123fca0(&local_48,&local_48);
        }
      }
      FUN_0369fe54(*(undefined8 *)PTR_DAT_04bc3a50,&local_48);
      if (((param_2 & 1) != 0) && (uVar8 = FUN_014e7d1c(param_1), (uVar8 & 1) != 0)) {
        uVar4 = uVar4 & 1;
        if (*(int *)(param_1 + 0xe8) != 0) {
          plVar13 = *(long **)(param_1 + 0xf0);
          lVar9 = (long)*(int *)(param_1 + 0xe8) << 3;
          do {
            plVar7 = (long *)FUN_014e7558(uVar8,*(undefined4 *)(*plVar13 + 0x14));
            uVar8 = 0;
            if (plVar7 != (long *)0x0) {
              uVar8 = (**(code **)(*plVar7 + 0x3b8))();
              if ((uVar8 & 1) == 0) {
                uVar8 = (**(code **)(*plVar7 + 0x3d0))(plVar7);
                uVar4 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar7 + 0x3c0))(plVar7);
                uVar4 = uVar4 & (uint)uVar8;
              }
            }
            plVar13 = plVar13 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
        }
      }
      goto LAB_014ecaf4;
    }
  }
  if ((*(int *)(param_1 + 0x18) == 3) &&
     (plVar13 = (long *)FUN_014e7558(uVar8,*(undefined4 *)(param_1 + 0x8c)), plVar13 != (long *)0x0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x014ec8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(*plVar13 + 0x3c0))();
    return uVar8;
  }
  uVar4 = 0;
LAB_014ecaf4:
  return (ulong)(uVar4 & 1);
}

