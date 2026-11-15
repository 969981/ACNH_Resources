
void FUN_01f65c44(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined **local_70;
  char *pcStack_68;
  
  puVar3 = PTR_DAT_04bb2020;
  local_70 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_68 = "HarvestPlazaPlace";
  sVar4 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_70);
  iVar5 = (uint)(sVar4 == 2) << 1;
  if (sVar4 == 1) {
    iVar5 = 1;
  }
  if (iVar5 == 2) {
    uVar14 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar13 = 0;
    uVar18 = 0;
    uVar19 = 0x14;
    uVar16 = 0x3c;
    uVar12 = 10;
  }
  else if (iVar5 == 1) {
    uVar12 = 0x14;
    uVar14 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar16 = 0x14;
    uVar13 = 0x14;
    uVar19 = 0x14;
  }
  else if (iVar5 == 0) {
    local_70 = (undefined **)(puVar3 + 0x10);
    pcStack_68 = "HarvestProgress";
    iVar5 = FUN_0273ea30(&local_70);
    if (iVar5 == 0) {
      uVar19 = 0x37;
      uVar18 = 5;
      uVar15 = 10;
      uVar14 = 0xf;
      uVar13 = 0xf;
      uVar16 = 0;
      uVar12 = 0;
      uVar17 = 0;
    }
    else if (iVar5 == 4) {
      uVar18 = 0x14;
      uVar12 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar17 = 0xf;
      uVar14 = 0x1e;
      uVar13 = 0xf;
      uVar19 = 0x14;
    }
    else {
      uVar12 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar19 = 0x28;
      uVar13 = 0xf;
      uVar15 = 10;
      uVar14 = 0x14;
      uVar18 = 0xf;
    }
  }
  else {
    uVar12 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar13 = 0;
    uVar18 = 0;
    uVar19 = 0;
  }
  uVar2 = uVar14 + uVar12 * 2 + uVar16 + uVar15 + uVar17 + uVar13 + uVar18 + uVar19;
  puVar1 = (undefined4 *)(param_1 + 0x136a4);
  lVar11 = *(long *)(param_1 + 8);
  uVar9 = *(uint *)(lVar11 + 0x288);
  *(undefined4 *)(lVar11 + 0x288) = *(undefined4 *)(lVar11 + 0x28c);
  uVar9 = uVar9 ^ uVar9 << 0xb;
  *(undefined4 *)(lVar11 + 0x28c) = *(undefined4 *)(lVar11 + 0x290);
  uVar8 = *(uint *)(lVar11 + 0x294);
  *(uint *)(lVar11 + 0x290) = uVar8;
  uVar9 = uVar9 >> 8 ^ uVar8 >> 0x13 ^ uVar9 ^ uVar8;
  *(uint *)(lVar11 + 0x294) = uVar9;
  uVar8 = (uint)((ulong)uVar9 * (ulong)uVar2 >> 0x20);
  uVar9 = uVar8 - uVar19;
  if (uVar8 < uVar19) {
    uVar10 = 1;
    goto LAB_01f66348;
  }
  uVar8 = uVar9 - uVar18;
  if (uVar9 < uVar18) {
LAB_01f65e38:
    uVar10 = 2;
  }
  else {
    uVar9 = uVar8 - uVar13;
    if (uVar8 < uVar13) {
LAB_01f65e48:
      uVar10 = 3;
      goto LAB_01f66348;
    }
    uVar8 = uVar9 - uVar17;
    if (uVar9 < uVar17) {
LAB_01f65e58:
      uVar10 = 5;
      goto LAB_01f66348;
    }
    uVar9 = uVar8 - uVar15;
    if (uVar8 < uVar15) {
LAB_01f65e68:
      uVar10 = 6;
      goto LAB_01f66348;
    }
    uVar8 = uVar9 - uVar16;
    if (uVar9 < uVar16) {
LAB_01f65e78:
      uVar10 = 7;
      goto LAB_01f66348;
    }
    uVar9 = uVar8 - uVar12;
    if (uVar8 < uVar12) {
      uVar10 = 8;
      goto LAB_01f66348;
    }
    if (uVar9 < uVar14) {
      *puVar1 = 9;
      local_70 = &PTR_LAB_048f9770;
      pcStack_68 = "HarvestPlazaHandTool";
      sVar4 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_70);
      if (sVar4 == 2) {
        plVar6 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar6 + 0x370))(auStack_78);
        FUN_022078b0(auStack_80,*(long *)(param_1 + 8) + 0x508);
        uVar7 = FUN_0277d7b4(auStack_78,auStack_80);
        if ((uVar7 & 1) != 0) {
          return;
        }
      }
      lVar11 = *(long *)(param_1 + 8);
      uVar9 = *(uint *)(lVar11 + 0x288);
      *(undefined4 *)(lVar11 + 0x288) = *(undefined4 *)(lVar11 + 0x28c);
      uVar9 = uVar9 ^ uVar9 << 0xb;
      *(undefined4 *)(lVar11 + 0x28c) = *(undefined4 *)(lVar11 + 0x290);
      uVar8 = *(uint *)(lVar11 + 0x294);
      *(uint *)(lVar11 + 0x290) = uVar8;
      uVar9 = uVar9 >> 8 ^ uVar8 >> 0x13 ^ uVar9 ^ uVar8;
      *(uint *)(lVar11 + 0x294) = uVar9;
      uVar8 = (uint)((ulong)uVar2 * (ulong)uVar9 >> 0x20);
      uVar9 = uVar8 - uVar19;
      if (uVar8 < uVar19) {
LAB_01f65f58:
        uVar10 = 1;
        goto LAB_01f66348;
      }
      uVar8 = uVar9 - uVar18;
      if (uVar9 < uVar18) goto LAB_01f65e38;
      uVar9 = uVar8 - uVar13;
      if (uVar8 < uVar13) goto LAB_01f65e48;
      uVar8 = uVar9 - uVar17;
      if (uVar9 < uVar17) goto LAB_01f65e58;
      uVar9 = uVar8 - uVar15;
      if (uVar8 < uVar15) goto LAB_01f65e68;
      uVar8 = uVar9 - uVar16;
      if (uVar9 < uVar16) goto LAB_01f65e78;
      uVar9 = uVar8 - uVar12;
      if (uVar8 < uVar12) {
LAB_01f65f98:
        uVar10 = 8;
        goto LAB_01f66348;
      }
      if (uVar9 < uVar14) {
        *puVar1 = 9;
        local_70 = &PTR_LAB_048f9770;
        pcStack_68 = "HarvestPlazaHandTool";
        sVar4 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_70);
        if (sVar4 == 2) {
          plVar6 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
          (**(code **)(*plVar6 + 0x370))(auStack_78);
          FUN_022078b0(auStack_80,*(long *)(param_1 + 8) + 0x508);
          uVar7 = FUN_0277d7b4(auStack_78,auStack_80);
          if ((uVar7 & 1) != 0) {
            return;
          }
        }
        lVar11 = *(long *)(param_1 + 8);
        uVar9 = *(uint *)(lVar11 + 0x288);
        *(undefined4 *)(lVar11 + 0x288) = *(undefined4 *)(lVar11 + 0x28c);
        uVar9 = uVar9 ^ uVar9 << 0xb;
        *(undefined4 *)(lVar11 + 0x28c) = *(undefined4 *)(lVar11 + 0x290);
        uVar8 = *(uint *)(lVar11 + 0x294);
        *(uint *)(lVar11 + 0x290) = uVar8;
        uVar9 = uVar9 >> 8 ^ uVar8 >> 0x13 ^ uVar9 ^ uVar8;
        *(uint *)(lVar11 + 0x294) = uVar9;
        uVar8 = (uint)((ulong)uVar2 * (ulong)uVar9 >> 0x20);
        uVar9 = uVar8 - uVar19;
        if (uVar8 < uVar19) goto LAB_01f65f58;
        uVar8 = uVar9 - uVar18;
        if (uVar9 < uVar18) {
LAB_01f66070:
          uVar10 = 2;
          goto LAB_01f66348;
        }
        uVar9 = uVar8 - uVar13;
        if (uVar8 < uVar13) {
LAB_01f66080:
          uVar10 = 3;
          goto LAB_01f66348;
        }
        uVar8 = uVar9 - uVar17;
        if (uVar9 < uVar17) {
LAB_01f66090:
          uVar10 = 5;
          goto LAB_01f66348;
        }
        uVar9 = uVar8 - uVar15;
        if (uVar8 < uVar15) {
LAB_01f660a0:
          uVar10 = 6;
          goto LAB_01f66348;
        }
        uVar8 = uVar9 - uVar16;
        if (uVar9 < uVar16) {
LAB_01f660b0:
          uVar10 = 7;
          goto LAB_01f66348;
        }
        uVar9 = uVar8 - uVar12;
        if (uVar8 < uVar12) goto LAB_01f65f98;
        if (uVar9 < uVar14) {
          *puVar1 = 9;
          local_70 = &PTR_LAB_048f9770;
          pcStack_68 = "HarvestPlazaHandTool";
          sVar4 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_70);
          if (sVar4 == 2) {
            plVar6 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
            (**(code **)(*plVar6 + 0x370))(auStack_78);
            FUN_022078b0(auStack_80,*(long *)(param_1 + 8) + 0x508);
            uVar7 = FUN_0277d7b4(auStack_78,auStack_80);
            if ((uVar7 & 1) != 0) {
              return;
            }
          }
          lVar11 = *(long *)(param_1 + 8);
          uVar9 = *(uint *)(lVar11 + 0x288);
          *(undefined4 *)(lVar11 + 0x288) = *(undefined4 *)(lVar11 + 0x28c);
          uVar9 = uVar9 ^ uVar9 << 0xb;
          *(undefined4 *)(lVar11 + 0x28c) = *(undefined4 *)(lVar11 + 0x290);
          uVar8 = *(uint *)(lVar11 + 0x294);
          *(uint *)(lVar11 + 0x290) = uVar8;
          uVar9 = uVar9 >> 8 ^ uVar8 >> 0x13 ^ uVar9 ^ uVar8;
          *(uint *)(lVar11 + 0x294) = uVar9;
          uVar8 = (uint)((ulong)uVar2 * (ulong)uVar9 >> 0x20);
          uVar9 = uVar8 - uVar19;
          if (uVar8 < uVar19) goto LAB_01f65f58;
          uVar8 = uVar9 - uVar18;
          if (uVar9 < uVar18) goto LAB_01f66070;
          uVar9 = uVar8 - uVar13;
          if (uVar8 < uVar13) goto LAB_01f66080;
          uVar8 = uVar9 - uVar17;
          if (uVar9 < uVar17) goto LAB_01f66090;
          uVar9 = uVar8 - uVar15;
          if (uVar8 < uVar15) goto LAB_01f660a0;
          uVar8 = uVar9 - uVar16;
          if (uVar9 < uVar16) goto LAB_01f660b0;
          uVar9 = uVar8 - uVar12;
          if (uVar8 < uVar12) goto LAB_01f65f98;
          if (uVar9 < uVar14) {
            *puVar1 = 9;
            local_70 = &PTR_LAB_048f9770;
            pcStack_68 = "HarvestPlazaHandTool";
            sVar4 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_70);
            if (sVar4 == 2) {
              plVar6 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
              (**(code **)(*plVar6 + 0x370))(auStack_78);
              FUN_022078b0(auStack_80,*(long *)(param_1 + 8) + 0x508);
              uVar7 = FUN_0277d7b4(auStack_78,auStack_80);
              if ((uVar7 & 1) != 0) {
                return;
              }
            }
            lVar11 = *(long *)(param_1 + 8);
            uVar9 = *(uint *)(lVar11 + 0x288);
            *(undefined4 *)(lVar11 + 0x288) = *(undefined4 *)(lVar11 + 0x28c);
            uVar9 = uVar9 ^ uVar9 << 0xb;
            *(undefined4 *)(lVar11 + 0x28c) = *(undefined4 *)(lVar11 + 0x290);
            uVar8 = *(uint *)(lVar11 + 0x294);
            *(uint *)(lVar11 + 0x290) = uVar8;
            uVar9 = uVar9 >> 8 ^ uVar8 >> 0x13 ^ uVar9 ^ uVar8;
            *(uint *)(lVar11 + 0x294) = uVar9;
            uVar9 = (uint)((ulong)uVar2 * (ulong)uVar9 >> 0x20);
            uVar2 = uVar9 - uVar19;
            if (uVar9 < uVar19) goto LAB_01f65f58;
            uVar19 = uVar2 - uVar18;
            if (uVar2 < uVar18) goto LAB_01f66070;
            uVar18 = uVar19 - uVar13;
            if (uVar19 < uVar13) goto LAB_01f66080;
            uVar13 = uVar18 - uVar17;
            if (uVar18 < uVar17) goto LAB_01f66090;
            uVar17 = uVar13 - uVar15;
            if (uVar13 < uVar15) goto LAB_01f660a0;
            uVar13 = uVar17 - uVar16;
            if (uVar17 < uVar16) goto LAB_01f660b0;
            uVar9 = uVar13 - uVar12;
            if (uVar13 < uVar12) goto LAB_01f65f98;
            if (uVar9 < uVar14) {
              *puVar1 = 9;
              local_70 = &PTR_LAB_048f9770;
              pcStack_68 = "HarvestPlazaHandTool";
              sVar4 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_70);
              if (sVar4 == 2) {
                plVar6 = (long *)FUN_016debb0(*(undefined8 *)(param_1 + 8));
                (**(code **)(*plVar6 + 0x370))(auStack_78);
                FUN_022078b0(auStack_80,*(long *)(param_1 + 8) + 0x508);
                uVar7 = FUN_0277d7b4(auStack_78,auStack_80);
                if ((uVar7 & 1) != 0) {
                  return;
                }
              }
              uVar10 = 0;
              goto LAB_01f66348;
            }
          }
        }
      }
    }
    uVar10 = 10;
    if (uVar12 <= uVar9 - uVar14) {
      uVar10 = 0;
    }
  }
LAB_01f66348:
  *puVar1 = uVar10;
  return;
}

