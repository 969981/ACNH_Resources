
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032d67f0(long *param_1,long param_2)

{
  char *pcVar1;
  ushort *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  undefined **ppuVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort uVar14;
  ushort *puVar15;
  long lVar16;
  uint uVar17;
  undefined **local_80;
  long lStack_78;
  undefined *local_60;
  undefined ***local_58;
  undefined **local_50;
  long lStack_48;
  uint local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  byte local_14 [4];
  
  plVar4 = (long *)*param_1;
  local_14[0] = 0;
  pcVar1 = PTR_DAT_04bb2120;
  if ((char *)plVar4[0x1c] != (char *)0x0) {
    pcVar1 = (char *)plVar4[0x1c];
  }
  if ((pcVar1 == "$") || (*pcVar1 == '$')) {
    puVar15 = *(ushort **)(param_2 + 8);
    uVar14 = *puVar15;
    if (uVar14 == 0) {
      iVar9 = 0;
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      iVar9 = 0;
      puVar10 = puVar15;
      do {
        puVar12 = puVar10;
        puVar13 = puVar10;
        while ((uVar14 & 0xfffe) != 0xe) {
          puVar12 = puVar12 + 1;
          uVar14 = *puVar12;
          iVar8 = iVar8 + 1;
          puVar13 = puVar13 + 1;
          if (uVar14 == 0) goto LAB_032d69ac;
        }
        if (uVar14 == 0xe) {
          puVar10 = (ushort *)((long)puVar13 + (ulong)puVar12[3] + 8);
        }
        else {
          puVar2 = puVar12;
          puVar10 = puVar13 + 3;
          if (uVar14 != 0xf) {
            puVar2 = (ushort *)0x0;
            puVar10 = puVar12;
          }
          puVar12 = puVar2;
        }
        iVar9 = iVar9 + ((uint)((int)puVar10 - (int)puVar13) >> 1 & 0xffff);
        if ((puVar12[1] == 0) && (puVar12[2] == 0)) {
          iVar8 = (uint)(puVar12[5] >> 1) + iVar8;
          iVar9 = iVar9 - (uint)(puVar12[5] >> 1);
        }
        uVar14 = *puVar10;
      } while (uVar14 != 0);
    }
LAB_032d69ac:
    (**(code **)(*plVar4 + 0xf0))
              (plVar4,*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x68),iVar8 + iVar9);
    (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,&DAT_04169358,0);
    (**(code **)(*(long *)*param_1 + 0x110))((long *)*param_1,puVar15,0,iVar8 + iVar9);
    local_60 = PTR_DAT_04bc8e78 + 0x10;
    local_58 = (undefined ***)PTR_DAT_04bb2da0;
    if (*(undefined ****)(*param_1 + 0xd8) != (undefined ***)0x0) {
      local_58 = *(undefined ****)(*param_1 + 0xd8);
    }
    FUN_032d70a8(param_1,&local_60);
    lVar5 = FUN_032cbf00(*(undefined8 *)(*param_1 + 0x18));
    if (lVar5 == 0) {
      return;
    }
    lStack_78 = *param_1;
    local_80 = &PTR_LAB_04b1baa8;
    plVar4 = *(long **)(lVar5 + 0xf0);
    if ((plVar4 != (long *)0x0) &&
       ((**(code **)(*plVar4 + 8))(plVar4), &local_80 == (undefined ***)0x0)) {
      *(undefined8 *)(lVar5 + 0xf0) = 0;
      return;
    }
    uVar6 = (*(code *)local_80[3])(&local_80,lVar5 + 0xf8);
    *(undefined8 *)(lVar5 + 0xf0) = uVar6;
    pppuVar3 = &local_80;
  }
  else {
    if ((pcVar1 != "+") && (*pcVar1 != '+')) {
      puVar15 = *(ushort **)(param_2 + 8);
      uVar14 = *puVar15;
      if (uVar14 == 0) {
        iVar9 = 0;
        iVar8 = 0;
      }
      else {
        iVar8 = 0;
        iVar9 = 0;
        puVar10 = puVar15;
        do {
          puVar12 = puVar10;
          puVar13 = puVar10;
          while ((uVar14 & 0xfffe) != 0xe) {
            puVar12 = puVar12 + 1;
            uVar14 = *puVar12;
            iVar8 = iVar8 + 1;
            puVar13 = puVar13 + 1;
            if (uVar14 == 0) goto LAB_032d6b10;
          }
          if (uVar14 == 0xe) {
            puVar10 = (ushort *)((long)puVar13 + (ulong)puVar12[3] + 8);
          }
          else {
            puVar2 = puVar12;
            puVar10 = puVar13 + 3;
            if (uVar14 != 0xf) {
              puVar2 = (ushort *)0x0;
              puVar10 = puVar12;
            }
            puVar12 = puVar2;
          }
          iVar9 = iVar9 + ((uint)((int)puVar10 - (int)puVar13) >> 1 & 0xffff);
          if ((puVar12[1] == 0) && (puVar12[2] == 0)) {
            iVar8 = (uint)(puVar12[5] >> 1) + iVar8;
            iVar9 = iVar9 - (uint)(puVar12[5] >> 1);
          }
          uVar14 = *puVar10;
        } while (uVar14 != 0);
      }
LAB_032d6b10:
      (**(code **)(*plVar4 + 0xf0))
                (plVar4,*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x68),iVar8 + iVar9);
      (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,&DAT_04169358,0);
                    /* WARNING: Could not recover jumptable at 0x032d6b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 0x110))((long *)*param_1,puVar15,0,iVar8 + iVar9);
      return;
    }
    lVar5 = 0;
    do {
      if (pcVar1[lVar5] == '\0') {
LAB_032d6b80:
        iVar9 = (int)lVar5;
joined_r0x032d6b84:
        if (0 < iVar9) {
          local_58 = (undefined ***)(pcVar1 + 1);
          goto LAB_032d6ba8;
        }
        break;
      }
      if (pcVar1[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_032d6b80;
      }
      if (pcVar1[lVar5 + 2] == '\0') {
        iVar9 = (int)lVar5 + 2;
        goto joined_r0x032d6b84;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    local_58 = *(undefined ****)(PTR_PTR_04bb2238 + 8);
LAB_032d6ba8:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    uVar7 = FUN_038d1960(local_14,&local_60,10);
    if ((uVar7 & 1) == 0) {
      uVar17 = 0;
      local_14[0] = 0;
    }
    else {
      uVar17 = (uint)local_14[0];
    }
    FUN_032d6ca0(param_1,param_2,uVar17,uVar17 != 0,0);
    lVar16 = *param_1;
    lVar5 = FUN_032cbf00(*(undefined8 *)(lVar16 + 0x18));
    if (lVar5 == 0) {
      return;
    }
    local_58 = &local_50;
    local_3c = uVar17 != 0;
    ppuVar11 = &PTR_LAB_04b1bb10;
    local_50 = &PTR_LAB_04b1bb10;
    local_3b = 0;
    local_60 = PTR_DAT_04bc8e60 + 0x10;
    plVar4 = *(long **)(lVar5 + 0xf0);
    lStack_48 = lVar16;
    local_40 = uVar17;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      if (local_58 == (undefined ***)0x0) {
        *(undefined8 *)(lVar5 + 0xf0) = 0;
        return;
      }
      ppuVar11 = *local_58;
    }
    uVar6 = (*(code *)ppuVar11[3])(local_58,lVar5 + 0xf8);
    *(undefined8 *)(lVar5 + 0xf0) = uVar6;
    pppuVar3 = local_58;
  }
  if (pppuVar3 != (undefined ***)0x0) {
    (*(code *)(*pppuVar3)[1])();
  }
  return;
}

