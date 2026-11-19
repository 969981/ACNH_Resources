
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_03b14230(char *param_1,long param_2,long *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint local_f0;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  uint local_b8;
  undefined1 local_b4 [63];
  undefined1 local_75;
  undefined *local_70;
  char *local_68;
  
  cVar1 = *param_1;
  lVar7 = param_2;
  local_68 = param_1;
  if (cVar1 == '/') {
    do {
      param_2 = lVar7;
      lVar7 = *(long *)(param_2 + 0x90);
    } while (*(long *)(param_2 + 0x90) != 0);
    local_68 = param_1 + 1;
    cVar1 = *local_68;
  }
  if (cVar1 == '\0') {
    return 0;
  }
  local_75 = 0;
  local_b8 = 0x40;
  local_c0 = local_b4;
  lVar7 = 0;
  local_e8 = PTR_DAT_04bb2020 + 0x10;
  local_b4[0] = 0;
  local_f0 = 0;
  local_c8 = PTR_DAT_04bb2bc0 + 0x10;
  local_d0 = &DAT_040a3a3d;
  local_e0 = &DAT_04079e84;
  do {
    if (local_68[lVar7] == '\0') {
LAB_03b1432c:
      uVar11 = (int)lVar7 + 1;
      goto LAB_03b14330;
    }
    if (local_68[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03b1432c;
    }
    if (local_68[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03b1432c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  uVar11 = 1;
LAB_03b14330:
  uVar12 = 0;
  local_d8 = local_e8;
  local_70 = local_e8;
  do {
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar7 = 0;
    do {
      if (local_68[lVar7] == '\0') {
LAB_03b143a8:
        iVar6 = (int)lVar7;
        goto joined_r0x03b143a8;
      }
      if (local_68[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03b143a8;
      }
      if (local_68[lVar7 + 2] == '\0') {
        iVar6 = (int)lVar7 + 2;
        goto joined_r0x03b143a8;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    iVar6 = 0;
joined_r0x03b143a8:
    if ((-1 < (int)uVar12) && ((int)uVar12 <= iVar6)) {
      (**(code **)(local_c8 + 0x18))(&local_c8);
      puVar2 = local_c0;
      uVar10 = (ulong)local_b8;
      if (0 < (int)local_b8) {
        uVar13 = 0;
        do {
          pcVar3 = local_68;
          if (local_68[uVar12] == '\0') {
LAB_03b14480:
            local_f0 = (int)uVar12 + 1;
            puVar2[uVar13 & 0xffffffff] = 0;
            break;
          }
          (**(code **)(local_e8 + 0x18))(&local_e8);
          uVar8 = 0;
          bVar4 = true;
          cVar1 = pcVar3[uVar12];
          do {
            if (local_e0[uVar8] == '\0') break;
            if (local_e0[uVar8] == cVar1) {
              if (bVar4) goto LAB_03b14480;
              break;
            }
            if (local_e0[uVar8 + 1] == '\0') break;
            if (local_e0[uVar8 + 1] == cVar1) goto LAB_03b14480;
            if (local_e0[uVar8 + 2] == '\0') break;
            if (local_e0[uVar8 + 2] == cVar1) goto LAB_03b14480;
            bVar4 = uVar8 < 0x7fffe;
            uVar8 = uVar8 + 3;
          } while (uVar8 != 0x80001);
          puVar2[uVar13] = cVar1;
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar13 != uVar10);
      }
    }
    if (local_f0 == uVar11) {
      if (param_3 != (long *)0x0) {
        *param_3 = param_2;
      }
      plVar9 = *(long **)(param_2 + 0x18);
      (**(code **)(local_c8 + 0x18))(&local_c8);
      uVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,local_c0,1);
      return uVar5;
    }
    (**(code **)(local_c8 + 0x18))(&local_c8);
    (**(code **)(local_c8 + 0x18))(&local_c8);
    puVar2 = local_c0;
    (**(code **)(local_d8 + 0x18))(&local_d8);
    if (puVar2 == local_d0) {
LAB_03b14344:
      param_2 = *(long *)(param_2 + 0x90);
    }
    else {
      uVar12 = 0;
      bVar4 = true;
      do {
        if (local_c0[uVar12] != local_d0[uVar12]) break;
        if (local_c0[uVar12] == '\0') {
          if (bVar4) goto LAB_03b14344;
          break;
        }
        if (local_c0[uVar12 + 1] != local_d0[uVar12 + 1]) break;
        if (local_c0[uVar12 + 1] == '\0') goto LAB_03b14344;
        if (local_c0[uVar12 + 2] != local_d0[uVar12 + 2]) break;
        if (local_c0[uVar12 + 2] == '\0') goto LAB_03b14344;
        bVar4 = uVar12 < 0x7fffe;
        uVar12 = uVar12 + 3;
      } while (uVar12 != 0x80001);
      (**(code **)(local_c8 + 0x18))(&local_c8);
      lVar7 = FUN_0036ab80(param_2,local_c0);
      if (lVar7 == 0) {
        return 0;
      }
      param_2 = *(long *)(lVar7 + 0xe8);
    }
    if (param_2 == 0) {
      return 0;
    }
    uVar12 = (ulong)local_f0;
  } while( true );
}

