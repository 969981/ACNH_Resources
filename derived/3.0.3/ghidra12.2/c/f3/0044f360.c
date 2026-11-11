
/* WARNING: Type propagation algorithm not settling */

void FUN_0044f360(byte *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58 [2];
  ulong local_48;
  
  if ((*param_1 >> 6 & 1) == 0) {
    local_70 = (undefined8 *)0x0;
    bVar2 = *param_1;
    puVar4 = local_70;
  }
  else {
    puVar4 = (undefined8 *)FUN_00426db0(param_1,0x40);
    if ((puVar4 == (undefined8 *)0x0) || ((undefined *)*puVar4 != PTR_LAB_04bd51a0)) {
      local_70 = (undefined8 *)0x0;
      bVar2 = *param_1;
      puVar4 = local_70;
    }
    else {
      *puVar4 = &LAB_00456dc0;
      bVar2 = *param_1;
    }
  }
  local_70 = puVar4;
  if ((char)bVar2 < '\0') {
    puVar5 = (undefined8 *)FUN_00426db0(param_1,0x80);
    if ((puVar5 == (undefined8 *)0x0) || ((undefined *)*puVar5 != PTR_LAB_04bd5190)) {
      local_68 = (undefined8 *)0x0;
      bVar2 = param_1[1];
      puVar5 = local_68;
    }
    else {
      *puVar5 = &LAB_00456e00;
      bVar2 = param_1[1];
    }
  }
  else {
    local_68 = (undefined8 *)0x0;
    bVar2 = param_1[1];
    puVar5 = local_68;
  }
  local_68 = puVar5;
  if ((((bVar2 >> 1 & 1) == 0) ||
      (local_60 = (undefined8 *)FUN_00426db0(param_1,0x200), local_60 == (undefined8 *)0x0)) ||
     ((undefined *)*local_60 != PTR_LAB_04bd5198)) {
    local_60 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) && (local_60 = (undefined8 *)0x0, puVar5 == (undefined8 *)0x0)
       ) {
      return;
    }
  }
  else {
    *local_60 = &LAB_00456e50;
  }
  puVar3 = local_60;
  uVar7 = *(uint *)(param_2 + 1);
  lVar9 = *param_2;
  lVar10 = (long)(int)uVar7;
  uVar11 = 0xffffffff;
  lVar6 = lVar10;
  do {
    if (lVar6 < 1) goto LAB_0044f4f4;
    lVar1 = lVar6 * 8;
    uVar11 = uVar11 + 1;
    lVar6 = lVar6 + -1;
  } while (*(byte **)(lVar9 + lVar1 + -8) != param_1);
  if (uVar7 == uVar11) {
LAB_0044f4f4:
    if (uVar7 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607c0,param_2,8);
      uVar7 = *(uint *)(param_2 + 1);
      lVar9 = *param_2;
      lVar10 = (long)(int)uVar7;
    }
    *(byte **)(lVar9 + lVar10 * 8) = param_1;
    *(uint *)(param_2 + 1) = uVar7 + 1;
    FUN_00427bc0(local_58,param_1,&DAT_04c15090);
    if ((local_48 & 1) != 0) {
      FUN_0043dd50(local_48 & 0xfffffffffffffffe);
    }
    if (local_58[0] == (undefined8 *)0x0) {
      uVar8 = FUN_00428440(param_1);
      if ((param_1 == (byte *)0x0) || ((uVar8 & 0x1f) != 7)) {
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
        }
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
        }
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
        }
      }
      else {
        lVar6 = *(long *)(param_1 + 8);
        if (lVar6 != 0) {
          FUN_0044f360(lVar6,param_2);
          FUN_00450a20(&local_70,lVar6);
        }
        auVar13 = FUN_00428460(param_1);
        uVar8 = auVar13._8_8_ - (long)auVar13._0_8_;
        if (0 < (int)(uVar8 >> 3)) {
          uVar8 = uVar8 >> 3 & 0xffffffff;
          puVar4 = auVar13._0_8_;
          do {
            FUN_0044f360(*puVar4,param_2);
            FUN_00450a20(&local_70,*puVar4);
            uVar8 = uVar8 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar8 != 0);
        }
      }
    }
    else {
      lVar6 = FUN_004270a0();
      uVar8 = (ulong)*(ushort *)(lVar6 + 8);
      if (uVar8 != 0) {
        uVar12 = 0;
        puVar4 = (undefined8 *)(lVar6 + 0x18);
        do {
          if (*(char *)*puVar4 == 't') {
            FUN_0044f360(puVar4[-1],param_2);
            uVar8 = (ulong)*(ushort *)(lVar6 + 8);
          }
          uVar12 = uVar12 + 1;
          puVar4 = puVar4 + 2;
        } while (uVar12 < uVar8);
      }
      (*(code *)*local_58[0])(param_1);
    }
    *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  }
  return;
}

