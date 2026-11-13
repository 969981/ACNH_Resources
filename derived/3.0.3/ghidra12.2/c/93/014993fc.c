
/* WARNING: Removing unreachable block (ram,0x01499b3c) */
/* WARNING: Removing unreachable block (ram,0x01499aec) */
/* WARNING: Removing unreachable block (ram,0x01499aa8) */
/* WARNING: Removing unreachable block (ram,0x01499a38) */
/* WARNING: Removing unreachable block (ram,0x014999e4) */
/* WARNING: Removing unreachable block (ram,0x014999a0) */
/* WARNING: Removing unreachable block (ram,0x0149992c) */
/* WARNING: Removing unreachable block (ram,0x014998dc) */
/* WARNING: Removing unreachable block (ram,0x01499898) */
/* WARNING: Removing unreachable block (ram,0x01499824) */
/* WARNING: Removing unreachable block (ram,0x014997d4) */
/* WARNING: Removing unreachable block (ram,0x01499794) */
/* WARNING: Removing unreachable block (ram,0x014997a4) */
/* WARNING: Removing unreachable block (ram,0x014997b0) */
/* WARNING: Removing unreachable block (ram,0x01499814) */
/* WARNING: Removing unreachable block (ram,0x01499830) */
/* WARNING: Removing unreachable block (ram,0x01499858) */
/* WARNING: Removing unreachable block (ram,0x014998a8) */
/* WARNING: Removing unreachable block (ram,0x014998b4) */
/* WARNING: Removing unreachable block (ram,0x0149991c) */
/* WARNING: Removing unreachable block (ram,0x01499938) */
/* WARNING: Removing unreachable block (ram,0x01499960) */
/* WARNING: Removing unreachable block (ram,0x014999b0) */
/* WARNING: Removing unreachable block (ram,0x014999bc) */
/* WARNING: Removing unreachable block (ram,0x01499a28) */
/* WARNING: Removing unreachable block (ram,0x01499a44) */
/* WARNING: Removing unreachable block (ram,0x01499a68) */
/* WARNING: Removing unreachable block (ram,0x01499ab8) */
/* WARNING: Removing unreachable block (ram,0x01499ac4) */
/* WARNING: Removing unreachable block (ram,0x01499b2c) */
/* WARNING: Removing unreachable block (ram,0x01499b48) */
/* WARNING: Removing unreachable block (ram,0x01499b70) */

void FUN_014993fc(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined **local_78;
  long lStack_70;
  undefined4 *local_68;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
  puVar4 = PTR_DAT_04bbfe68;
  puVar3 = PTR_DAT_04bb2720;
  puVar2 = PTR_DAT_04bb2640;
  local_58 = 0;
  local_78 = &PTR_LAB_049a5cb8;
  local_68 = &local_58;
  lStack_70 = param_1;
  if (*(long *)PTR_DAT_04bb59d8 == 0) {
    local_88 = 0;
    local_90 = PTR_DAT_04bbfe68 + 0x10;
    lVar10 = *(long *)PTR_DAT_04bb2720;
    if (lVar10 == 0) {
      puVar13 = &DAT_055c04a0;
    }
    else {
      puVar13 = &DAT_055c04a0;
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar13,0);
        puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar13 = &DAT_055c04a0;
        }
      }
    }
    local_84 = *(undefined4 *)(puVar13 + 7);
    local_80 = FUN_017baf44();
    local_80 = local_80 & 1;
  }
  else {
    lVar10 = *(long *)PTR_DAT_04bb2720;
    puVar12 = &DAT_055c04a0;
    if (lVar10 == 0) {
      local_90 = PTR_DAT_04bbfe68 + 0x10;
      local_88 = 0;
      bVar5 = DAT_055c04d8 == -0x17df00c3;
    }
    else {
      if (*(long *)(lVar10 + 0x330) == 0) {
        bVar5 = DAT_055c04d8 == -0x17df00c3;
        lVar11 = *(long *)(lVar10 + 0x330);
      }
      else {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar7,0);
        piVar1 = (int *)((long)puVar13 + 0x38);
        lVar10 = *(long *)puVar3;
        if (iVar6 != 0x758f7eaf) {
          piVar1 = &DAT_055c04d8;
        }
        local_90 = puVar4 + 0x10;
        local_88 = 0;
        bVar5 = *piVar1 == -0x17df00c3;
        if (lVar10 == 0) goto LAB_014995c8;
        lVar11 = *(long *)(lVar10 + 0x330);
      }
      local_88 = 0;
      local_90 = puVar4 + 0x10;
      if (lVar11 != 0) {
        local_88 = 0;
        local_90 = puVar4 + 0x10;
        puVar12 = (undefined8 *)
                  (**(code **)(**(long **)puVar2 + 0x18))
                            (*(long **)puVar2,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar12,0);
        if (iVar6 != 0x758f7eaf) {
          puVar13 = &DAT_055c04a0;
        }
        puVar12 = puVar13;
      }
    }
LAB_014995c8:
    local_84 = *(undefined4 *)(puVar12 + 7);
    local_80 = FUN_017baf44();
    local_80 = local_80 & 1;
    if (bVar5) {
      uVar8 = FUN_01a4f680(&local_90,0);
      if ((uVar8 & 1) != 0) {
        uVar9 = FUN_01a4fa00(&local_90);
        FUN_01a51a0c(&local_90,0,uVar9,&local_78);
      }
      uVar8 = FUN_01a4f680(&local_90,1);
      if ((uVar8 & 1) != 0) {
        uVar9 = FUN_01a4fa00(&local_90);
        FUN_01a51a0c(&local_90,1,uVar9,&local_78);
      }
      uVar8 = FUN_01a4f680(&local_90,2);
      if ((uVar8 & 1) != 0) {
        uVar9 = FUN_01a4fa00(&local_90);
        FUN_01a51a0c(&local_90,2,uVar9,&local_78);
      }
      uVar8 = FUN_01a4f680(&local_90,3);
      if ((uVar8 & 1) != 0) {
        uVar9 = FUN_01a4fa00(&local_90);
        FUN_01a51a0c(&local_90,3,uVar9,&local_78);
      }
      uVar8 = FUN_01a4f680(&local_90,4);
      if ((uVar8 & 1) != 0) {
        uVar9 = FUN_01a4fa00(&local_90);
        FUN_01a51a0c(&local_90,4,uVar9,&local_78);
      }
      uVar8 = FUN_01a4f680(&local_90,5);
      if ((uVar8 & 1) != 0) {
        uVar9 = FUN_01a4fa00(&local_90);
        FUN_01a51a0c(&local_90,5,uVar9,&local_78);
      }
      uVar8 = FUN_01a4f680(&local_90,6);
      if ((uVar8 & 1) != 0) {
        uVar9 = FUN_01a4fa00(&local_90);
        FUN_01a51a0c(&local_90,6,uVar9,&local_78);
      }
      uVar8 = FUN_01a4f680(&local_90,7);
      if ((uVar8 & 1) != 0) {
        uVar9 = FUN_01a4fa00(&local_90);
        FUN_01a51a0c(&local_90,7,uVar9,&local_78);
      }
      goto LAB_01499b84;
    }
  }
  uVar8 = FUN_01a4f680(&local_90,0);
  puVar2 = PTR_DAT_04bb27a8;
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_01a4fa00(&local_90);
    local_54 = 0;
    if (*(long *)(*(long *)puVar2 + 0x1f8) != 0) {
      local_54 = 0;
      lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0x1f8) + 0xd0);
      if (lVar10 != 0) {
        FUN_012e6150(lVar10,&local_78,uVar9);
      }
    }
  }
  uVar8 = FUN_01a4f680(&local_90,1);
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_01a4fa00(&local_90);
    local_54 = 0;
    if (*(long *)(*(long *)puVar2 + 0x1f8) != 0) {
      local_54 = 1;
      lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0x1f8) + 0xe0);
      if (lVar10 != 0) {
        FUN_012e6150(lVar10,&local_78,uVar9);
      }
    }
  }
  uVar8 = FUN_01a4f680(&local_90,2);
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_01a4fa00(&local_90);
    local_54 = 0;
    if (*(long *)(*(long *)puVar2 + 0x1f8) != 0) {
      local_54 = 2;
      lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0x1f8) + 0xf0);
      if (lVar10 != 0) {
        FUN_012e6150(lVar10,&local_78,uVar9);
      }
    }
  }
  uVar8 = FUN_01a4f680(&local_90,3);
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_01a4fa00(&local_90);
    local_54 = 0;
    if (*(long *)(*(long *)puVar2 + 0x1f8) != 0) {
      local_54 = 3;
      lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0x1f8) + 0x100);
      if (lVar10 != 0) {
        FUN_012e6150(lVar10,&local_78,uVar9);
      }
    }
  }
  uVar8 = FUN_01a4f680(&local_90,4);
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_01a4fa00(&local_90);
    local_54 = 0;
    if (*(long *)(*(long *)puVar2 + 0x1f8) != 0) {
      local_54 = 4;
      lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0x1f8) + 0x110);
      if (lVar10 != 0) {
        FUN_012e6150(lVar10,&local_78,uVar9);
      }
    }
  }
  uVar8 = FUN_01a4f680(&local_90,5);
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_01a4fa00(&local_90);
    local_54 = 0;
    if (*(long *)(*(long *)puVar2 + 0x1f8) != 0) {
      local_54 = 5;
      lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0x1f8) + 0x120);
      if (lVar10 != 0) {
        FUN_012e6150(lVar10,&local_78,uVar9);
      }
    }
  }
  uVar8 = FUN_01a4f680(&local_90,6);
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_01a4fa00(&local_90);
    local_54 = 0;
    if (*(long *)(*(long *)puVar2 + 0x1f8) != 0) {
      local_54 = 6;
      lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0x1f8) + 0x130);
      if (lVar10 != 0) {
        FUN_012e6150(lVar10,&local_78,uVar9);
      }
    }
  }
  uVar8 = FUN_01a4f680(&local_90,7);
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_01a4fa00(&local_90);
    if (*(long *)(*(long *)puVar2 + 0x1f8) != 0) {
      local_54 = 7;
      lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0x1f8) + 0x140);
      if (lVar10 != 0) {
        FUN_012e6150(lVar10,&local_78,uVar9);
      }
    }
  }
LAB_01499b84:
  *(undefined4 *)(param_1 + 0xc0280) = local_58;
  return;
}

