
void FUN_03132810(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined *local_b0;
  char *local_a8;
  long local_a0;
  undefined8 local_98;
  char *local_90;
  char *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  
  puVar1 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    puVar8 = malloc(0xa8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar13 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar8,2);
  *puVar8 = &PTR_FUN_04b03848;
  puVar8[0x11] = &PTR_LAB_04b038f0;
  local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
  *(undefined2 *)(puVar8 + 4) = 1;
  *(undefined4 *)((long)puVar8 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)((long)puVar8 + 0x24) = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  FUN_03c5bcd4(puVar8);
  if ((undefined8 *)puVar8[10] != puVar8 + 9) {
    lVar13 = (long)*(int *)((long)puVar8 + 0x5c);
    puVar14 = (undefined8 *)((long)puVar8[10] - lVar13);
    do {
      (**(code **)*puVar14)(puVar14,*(undefined4 *)((long)puVar8 + 0x24));
      puVar14 = (undefined8 *)(*(long *)((long)puVar14 + lVar13 + 8) - lVar13);
    } while (puVar14 != (undefined8 *)((long)(puVar8 + 9) - lVar13));
  }
  lVar13 = *(long *)(param_2 + 0x18);
  plVar12 = (long *)(lVar13 + 0x60);
  lVar6 = *plVar12;
  plVar7 = (long *)((long)*(int *)(lVar13 + 0x74) + (long)puVar8);
  *plVar12 = (long)plVar7;
  *plVar7 = lVar6;
  plVar7[1] = (long)plVar12;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar7;
  }
  lVar6 = *(long *)puVar4;
  *(int *)(lVar13 + 0x70) = *(int *)(lVar13 + 0x70) + 1;
  if (lVar6 == 0) {
    plVar7 = malloc(0x10);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar7 = (long *)(lVar6 + 8);
    if (lVar13 != 0) {
      plVar7 = (long *)(lVar13 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,0xfffffffc);
    }
  }
  *plVar7 = param_2;
  puVar3 = PTR_PTR_04bb2238;
  puVar8[3] = *(undefined8 *)(param_2 + 0x18);
  puVar2 = PTR_DAT_04bb2020;
  plVar7[1] = (long)puVar8;
  *(long **)(param_2 + 0x20) = plVar7;
  local_6e = 1;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0x100;
  puVar1 = puVar2 + 0x10;
  local_98 = (undefined *)0x0;
  local_88 = "*Select";
  local_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,1,0,&local_98);
  local_78 = *(undefined8 *)(puVar3 + 8);
  local_70 = 0x100;
  local_6e = 1;
  local_98 = (undefined *)0x0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_88 = "*UnSelect;<*Select";
  local_90 = puVar1;
  puStack_80 = puVar1;
  FUN_03c5cb04(plVar7,0,1,&local_98);
  lVar6 = plVar7[1];
  lVar13 = *(long *)puVar4;
  if (lVar13 == 0) {
    free(plVar7);
  }
  else {
    plVar12 = (long *)FUN_038cb610(lVar13,plVar7);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x38))(plVar12,plVar7);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  local_98 = puVar2 + 0x10;
  *(long *)(param_1 + 0x250) = lVar6;
  local_90 = "*Pattern";
  uVar9 = FUN_03c68d44(param_2,&local_98,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 600) = uVar9;
  plVar7 = *(long **)(param_1 + 0x58);
  local_a0 = 0;
  if (((plVar7 != (long *)0x0) && ((**(code **)(*plVar7 + 0x28))(plVar7,&local_a0), local_a0 != 0))
     && (plVar7 = (long *)(local_a0 + 0xb8), *plVar7 != 0)) {
    pcVar10 = (char *)FUN_00364d70(plVar7,"TabName");
    if ((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) {
      local_98 = puVar2 + 0x10;
      local_90 = pcVar10;
      uVar9 = FUN_03462900(param_1,param_2,&local_98,&local_a0);
      *(undefined8 *)(param_1 + 0x260) = uVar9;
    }
    lVar13 = FUN_00364ec0(plVar7,"PatternTblName");
    if (lVar13 != 0) {
      puVar2 = puVar2 + 0x10;
      local_90 = (char *)(lVar13 + (ulong)*(uint *)(lVar13 + 4));
      local_98 = puVar2;
      if (*(char *)(lVar13 + (ulong)*(uint *)(lVar13 + 4)) != '\0') {
        uVar15 = 0;
        do {
          local_a8 = "";
          if (uVar15 < 0x27) {
            local_a8 = (&PTR_s_cNone_04b036a8)[uVar15];
          }
          local_b0 = puVar2;
          (**(code **)(local_98 + 0x18))(&local_98);
          (**(code **)(local_98 + 0x18))(&local_98);
          pcVar10 = local_90;
          (**(code **)(local_b0 + 0x18))(&local_b0);
          if (pcVar10 == local_a8) {
LAB_03132c6c:
            local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar15);
            *(uint *)(param_1 + 0x268) = uVar15;
            break;
          }
          uVar11 = 0;
          bVar5 = true;
          do {
            if (local_90[uVar11] != local_a8[uVar11]) break;
            if (local_90[uVar11] == '\0') {
              if (bVar5) goto LAB_03132c6c;
              break;
            }
            if (local_90[uVar11 + 1] != local_a8[uVar11 + 1]) break;
            if (local_90[uVar11 + 1] == '\0') goto LAB_03132c6c;
            if (local_90[uVar11 + 2] != local_a8[uVar11 + 2]) break;
            if (local_90[uVar11 + 2] == '\0') goto LAB_03132c6c;
            bVar5 = uVar11 < 0x7fffe;
            uVar11 = uVar11 + 3;
          } while (uVar11 != 0x80001);
          uVar16 = 0x27;
          if ((int)uVar15 < 0x27) {
            uVar16 = uVar15 + 1;
          }
          uVar15 = uVar16;
        } while (uVar16 != 0x27);
      }
    }
    lVar13 = FUN_00364ec0(plVar7,"TabType");
    if ((lVar13 != 0) &&
       (pcVar10 = (char *)(lVar13 + (ulong)*(uint *)(lVar13 + 4)), *pcVar10 != '\0')) {
      if (pcVar10 == s_cIcon_04b037e0) {
LAB_03132cf0:
        *(undefined4 *)(param_1 + 0x26c) = 0;
      }
      else {
        uVar11 = 0;
        bVar5 = true;
        do {
          if (pcVar10[uVar11] != s_cIcon_04b037e0[uVar11]) break;
          if (pcVar10[uVar11] == '\0') {
            if (bVar5) goto LAB_03132cf0;
            break;
          }
          bVar5 = uVar11 < 0x80000;
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x80001);
        if (pcVar10 == &DAT_04b037e7) {
LAB_03132d48:
          *(undefined4 *)(param_1 + 0x26c) = 1;
        }
        else {
          uVar11 = 0;
          bVar5 = true;
          do {
            if (pcVar10[uVar11] != (&DAT_04b037e7)[uVar11]) break;
            if (pcVar10[uVar11] == '\0') {
              if (bVar5) goto LAB_03132d48;
              break;
            }
            bVar5 = uVar11 < 0x80000;
            uVar11 = uVar11 + 1;
          } while (uVar11 != 0x80001);
        }
      }
    }
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

