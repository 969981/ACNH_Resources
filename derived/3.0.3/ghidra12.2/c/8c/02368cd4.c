
undefined8 FUN_02368cd4(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte bVar4;
  short sVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  byte local_28 [4];
  undefined4 local_24;
  
  lVar6 = DAT_056b6f18;
  puVar2 = PTR_DAT_04bb6298;
  if (DAT_056b6f18 == 0) {
    return 0;
  }
  pcVar1 = (char *)(param_1 + 0x17ac);
  local_28[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_24 = 0x19;
    puVar10 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar10 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar10 >> 0x19 & 1) == 0) goto LAB_02368e50;
    if (((*puVar10 >> 0x19 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b)) {
      if (*pcVar1 != '\0') {
        return 0;
      }
      if ((*(uint *)(param_1 + 0xed0) >> 0xc & 1) == 0) {
        if ((*(uint *)(param_1 + 0xed0) >> 0x17 & 1) != 0) {
LAB_02369064:
          local_24 = 0x1a;
          uVar9 = FUN_0290cbcc(&local_24);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
          local_24 = 0;
          uVar9 = FUN_0290cbcc(&local_24);
          if ((uVar9 & 1) == 0) {
            uVar11 = 0x6f;
          }
          else {
            uVar11 = 0x6e;
          }
          goto LAB_02369820;
        }
        local_24 = 0xe;
        if ((*(uint *)(param_1 + 0xed0) >> 0xe & 1) != 0) {
          FUN_02ef7b98(DAT_056b6f18,1,local_28,0);
          return 1;
        }
        if ((*(uint *)(param_1 + 0xed0) >> 0xf & 1) == 0) {
          if ((*(uint *)(param_1 + 0xed0) >> 0x10 & 1) == 0) {
            if ((*(uint *)(param_1 + 0xed0) >> 0x13 & 1) == 0) {
LAB_0236990c:
              local_24 = 0x1d;
              if ((*(uint *)(param_1 + 0xed0) >> 0x1d & 1) == 0) {
                return 0;
              }
              uVar11 = 0x84;
              goto LAB_02369820;
            }
            goto LAB_023698fc;
          }
          goto LAB_02369870;
        }
        goto LAB_02369814;
      }
      goto LAB_02369518;
    }
    if (*pcVar1 != '\0') {
      return 0;
    }
    if ((*(uint *)(param_1 + 0xed0) >> 0xc & 1) != 0) goto LAB_02369518;
    local_24 = 0x19;
    if ((*(uint *)(param_1 + 0xed0) >> 0x19 & 1) == 0) {
      if ((*(uint *)(param_1 + 0xed0) >> 0x17 & 1) != 0) goto LAB_02369064;
      if ((*(uint *)(param_1 + 0xed0) >> 0xf & 1) != 0) goto LAB_02369814;
      if ((*(uint *)(param_1 + 0xed0) >> 0x10 & 1) != 0) goto LAB_02369870;
      if ((*(uint *)(param_1 + 0xed0) >> 0x13 & 1) != 0) goto LAB_023698fc;
      local_24 = 0x1a;
      if ((*(uint *)(param_1 + 0xed0) >> 0x1a & 1) == 0) {
LAB_02369470:
        local_24 = 0x1b;
        if ((*(uint *)(param_1 + 0xed0) >> 0x1b & 1) != 0) {
          uVar11 = 0x79;
          goto LAB_02369820;
        }
        if ((*(uint *)(param_1 + 0xed0) >> 0x1c & 1) != 0) {
          local_24 = 0;
          uVar9 = FUN_0290cbcc(&local_24);
          if ((uVar9 & 1) != 0) {
            return 0;
          }
          uVar11 = 0x77;
          goto LAB_02369820;
        }
        goto LAB_0236990c;
      }
      uVar9 = FUN_02538bb0(local_28);
      if ((uVar9 & 1) == 0) {
        if (*pcVar1 != '\0') {
          return 0;
        }
        goto LAB_02369470;
      }
LAB_023697d8:
      uVar11 = 0x78;
      goto LAB_02369820;
    }
LAB_02369554:
    uVar11 = 0x3d;
    goto LAB_02369820;
  }
LAB_02368e50:
  uVar9 = FUN_0180c600();
  if ((uVar9 & 1) == 0) {
    sVar5 = *(short *)puVar2;
    if (sVar5 != -1) {
      local_24 = 0x15;
      puVar10 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar10 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar10 >> 0x15 & 1) != 0) {
        if (*pcVar1 != '\0') {
          return 0;
        }
        if ((*(uint *)(param_1 + 0xed0) >> 0xc & 1) == 0) {
          local_24 = 0x17;
          if ((*(uint *)(param_1 + 0xed0) >> 0x17 & 1) != 0) {
            uVar11 = 0x5b;
            goto LAB_02369820;
          }
          if ((*(uint *)(param_1 + 0xed0) >> 0xf & 1) == 0) {
            if ((*(uint *)(param_1 + 0xed0) >> 0x10 & 1) == 0) {
              if ((*(uint *)(param_1 + 0xed0) >> 0x13 & 1) == 0) {
                local_24 = 0x18;
                if ((*(uint *)(param_1 + 0xed0) >> 0x18 & 1) == 0) {
                  return 0;
                }
                uVar9 = FUN_02538bb0(local_28);
                if ((uVar9 & 1) == 0) {
                  uVar9 = FUN_02ef7500(lVar6,local_28);
                  if ((uVar9 & 1) == 0) {
                    return 0;
                  }
                  return 1;
                }
                goto LAB_023697d8;
              }
              goto LAB_023698fc;
            }
            goto LAB_02369870;
          }
          goto LAB_02369814;
        }
        goto LAB_02369518;
      }
    }
    iVar13 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar13 = 0;
      }
      else {
        puVar8 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar7 = FUN_006bd550(*puVar8,0);
        iVar13 = 0;
        if ((iVar7 == 0x758f7eaf) && (iVar13 = 0, DAT_05aed670 != 0)) {
          iVar13 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar13 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if ((DAT_05292434 == iVar13) && (*pcVar1 == '\0')) {
      local_24 = 0x1a;
      if ((*(uint *)(param_1 + 0xed0) >> 0x1a & 1) != 0) {
        uVar9 = FUN_02538bb0(local_28);
        if ((uVar9 & 1) != 0) goto LAB_023697d8;
        if (*pcVar1 != '\0') goto LAB_023690b0;
      }
      local_24 = 0x1d;
      if ((*(uint *)(param_1 + 0xed0) >> 0x1d & 1) != 0) {
        uVar11 = 0xdf;
        goto LAB_02369820;
      }
    }
LAB_023690b0:
    sVar5 = *(short *)puVar2;
    if (sVar5 == -1) goto LAB_023694dc;
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    cVar12 = *pcVar1;
    if (((*(uint *)(puVar2 + 4) & 1) != 0) && (cVar12 == '\0')) {
      local_24 = 0x20;
      if ((*(uint *)(param_1 + 0xed4) & 1) != 0) {
        uVar11 = 0xe6;
        goto LAB_02369820;
      }
      local_24 = 0x21;
      if ((*(uint *)(param_1 + 0xed4) >> 1 & 1) == 0) {
        local_24 = 0x22;
        if ((*(uint *)(param_1 + 0xed4) >> 2 & 1) == 0) {
          local_24 = 0x1a;
          if (((*(uint *)(param_1 + 0xed0) >> 0x1a & 1) != 0) &&
             (uVar9 = FUN_02538bb0(local_28), (uVar9 & 1) != 0)) goto LAB_023697d8;
        }
        else {
          uVar9 = FUN_0180ade0();
          if ((uVar9 & 1) == 0) {
            lVar14 = *DAT_0537d558;
            bVar4 = *(byte *)(lVar14 + 0x473);
            if ((long)(char)bVar4 != 0xffffffffffffffff) {
              pbVar3 = (byte *)(lVar14 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
              if (7 < bVar4) {
                pbVar3 = (byte *)(lVar14 + 0x48);
              }
              if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar14 + 0x472) != bVar4))
              goto LAB_023694dc;
            }
            uVar11 = 0xf0;
            goto LAB_02369820;
          }
        }
      }
      else {
        uVar9 = FUN_0180ade0();
        if ((uVar9 & 1) != 0) {
          lVar14 = *DAT_0537d558;
          bVar4 = *(byte *)(lVar14 + 0x473);
          if ((long)(char)bVar4 != 0xffffffffffffffff) {
            pbVar3 = (byte *)(lVar14 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
            if (7 < bVar4) {
              pbVar3 = (byte *)(lVar14 + 0x48);
            }
            if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar14 + 0x472) != bVar4))
            goto LAB_023694dc;
          }
          uVar11 = 0xef;
          goto LAB_02369820;
        }
      }
LAB_023694dc:
      cVar12 = *pcVar1;
    }
    if (cVar12 != '\0') {
      return 0;
    }
    if ((*(uint *)(param_1 + 0xed0) >> 0xc & 1) != 0) goto LAB_02369518;
    local_24 = 0xd;
    if ((*(uint *)(param_1 + 0xed0) >> 0xd & 1) != 0) goto LAB_02369554;
    local_24 = 0xe;
    if ((*(uint *)(param_1 + 0xed0) >> 0xe & 1) != 0) {
      FUN_02ef7b98(lVar6,1,local_28,0);
      return 1;
    }
    if ((*(uint *)(param_1 + 0xed0) >> 0xf & 1) == 0) {
      if ((*(uint *)(param_1 + 0xed0) >> 0x10 & 1) == 0) {
        local_24 = 0x11;
        if ((*(uint *)(param_1 + 0xed0) >> 0x11 & 1) != 0) {
          uVar11 = 0x45;
          goto LAB_02369820;
        }
        if ((*(uint *)(param_1 + 0xed0) >> 0x12 & 1) != 0) goto LAB_0236972c;
        if ((*(uint *)(param_1 + 0xed0) >> 0x13 & 1) == 0) goto LAB_023697a0;
        goto LAB_023698fc;
      }
      goto LAB_02369870;
    }
  }
  else {
    if (*pcVar1 != '\0') {
      return 0;
    }
    if ((*(uint *)(param_1 + 0xed0) >> 0xc & 1) != 0) {
LAB_02369518:
      local_24 = 0xc;
      uVar11 = 0;
      goto LAB_02369820;
    }
    local_24 = 0xd;
    if ((*(uint *)(param_1 + 0xed0) >> 0xd & 1) != 0) {
      uVar11 = 0x25;
      goto LAB_02369820;
    }
    local_24 = 0x11;
    if ((*(uint *)(param_1 + 0xed0) >> 0x11 & 1) != 0) {
      FUN_02ef7b98(lVar6,0x24,local_28,0);
      return 0;
    }
    if ((*(uint *)(param_1 + 0xed0) >> 0xf & 1) == 0) {
      if ((*(uint *)(param_1 + 0xed0) >> 0x10 & 1) == 0) {
        if ((*(uint *)(param_1 + 0xed0) >> 0x13 & 1) == 0) {
          if ((*(uint *)(param_1 + 0xed0) >> 0x12 & 1) != 0) {
LAB_0236972c:
            local_24 = 0x12;
            puVar10 = (uint *)FUN_0251ad2c();
            local_24 = 3;
            *puVar10 = *puVar10 & 0xfffffff7;
            uVar11 = 0x3c;
            goto LAB_02369820;
          }
LAB_023697a0:
          local_24 = 0x1a;
          if (((*(uint *)(param_1 + 0xed0) >> 0x1a & 1) == 0) ||
             (uVar9 = FUN_02538bb0(local_28), (uVar9 & 1) == 0)) {
            return 0;
          }
          goto LAB_023697d8;
        }
LAB_023698fc:
        local_24 = 0x13;
        uVar11 = 4;
        goto LAB_02369820;
      }
LAB_02369870:
      local_24 = 0x10;
      uVar11 = 2;
      goto LAB_02369820;
    }
  }
LAB_02369814:
  local_24 = 0xf;
  uVar11 = 10;
LAB_02369820:
  FUN_02ef7b98(lVar6,uVar11,local_28,0);
  return 1;
}

