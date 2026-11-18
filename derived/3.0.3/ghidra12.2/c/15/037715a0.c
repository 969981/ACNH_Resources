
undefined1  [16] FUN_037715a0(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 uVar7;
  short sVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  ulong local_60;
  float local_58;
  
  local_60 = 0;
  lVar10 = *(long *)PTR_DAT_04bb59d8;
  lVar6 = *(long *)PTR_DAT_04bb27f8;
  if (lVar10 == 0 || lVar6 == 0) goto LAB_03771b08;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (0,0,0,*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  iVar3 = *(int *)(puVar9 + 7);
  local_60 = 0;
  local_58 = 0.0;
  if ((iVar3 == -0x7975b8e8) || (iVar3 == -0x3e092032)) {
    local_78 = 0;
    local_88 = PTR_DAT_04bbc1a0 + 0x10;
    local_80 = PTR_DAT_04bb2010 + 0x10;
    uStack_68 = 0;
    local_70 = local_80;
    FUN_01811430(&local_88);
    local_58 = (float)(int)local_78._4_4_ * 5.0 + 5.0 + 5.0;
    fVar12 = (float)(int)local_78 * 5.0 + 5.0 + 10.0;
    local_60 = CONCAT44(local_60._4_4_,fVar12);
    if (iVar3 != -0x3e092032) goto LAB_03771ad4;
LAB_03771ac8:
    fVar12 = fVar12 + -10.0;
LAB_03771ad0:
    local_60 = CONCAT44(local_60._4_4_,fVar12);
LAB_03771ad4:
    lVar6 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0xa8) != 0)) && (*(char *)(lVar6 + 0x11c8) == '\0')) {
      FUN_0093a950(lVar6 + 0x28,&local_60,0);
    }
  }
  else {
    if (iVar3 == -0x17df00c3) {
      fVar13 = (float)*(int *)(lVar10 + 0x54) * 5.0 + 5.0;
      fVar12 = (float)*(int *)(lVar10 + 0x50) * 5.0 + 5.0;
      local_60 = (ulong)(uint)fVar12;
      uVar4 = FUN_036e49f0(lVar6);
      puVar1 = PTR_DAT_04bc3a48;
      if ((uVar4 & 1) == 0) {
        local_70._0_4_ = (uint)(uint3)local_70;
        local_58 = fVar13 + 10.0;
        local_78._4_4_ = (uint)((ulong)local_78 >> 0x20) & 0xffffff00;
        local_80 = (undefined1 *)((long)&local_78 + 4);
        local_78 = CONCAT44(local_78._4_4_,8);
        local_88 = PTR_DAT_04bb3768 + 0x10;
        if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
             ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar10 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar10 == 0)) {
          uVar7 = *(undefined2 *)(lVar6 + 0x2a);
        }
        else if ((*(long **)(lVar10 + 0x60) == (long *)0x0) ||
                (puVar9 = (undefined8 *)**(long **)(lVar10 + 0x60), puVar9 == (undefined8 *)0x0)) {
          uVar7 = *(undefined2 *)(*(long *)(lVar10 + 0x48) + *(long *)(lVar10 + 0x40) + 2);
        }
        else {
          uVar4 = (**(code **)*puVar9)();
          uVar7 = *(undefined2 *)(*(long *)(lVar10 + 0x48) + *(long *)(lVar10 + 0x40) + 2);
          if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x60) != 0)) &&
             (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x60) + 8), puVar9 != (undefined8 *)0x0))
          {
            (**(code **)*puVar9)();
          }
        }
        uVar4 = FUN_0376b510(&local_88,uVar7);
        if ((uVar4 & 1) != 0) {
          (**(code **)(local_88 + 0x18))(&local_88);
          (**(code **)(local_88 + 0x18))(&local_88);
          if (local_80 == &DAT_0409b647) goto LAB_03771ad4;
          uVar4 = 0;
          bVar2 = true;
          do {
            if (local_80[uVar4] != (&DAT_0409b647)[uVar4]) break;
            if (local_80[uVar4] == '\0') {
              if (bVar2) goto LAB_03771ad4;
              break;
            }
            bVar2 = uVar4 < 0x80000;
            uVar4 = uVar4 + 1;
          } while (uVar4 != 0x80001);
        }
        if (((*(ushort **)puVar1 == (ushort *)0x0) || ((**(ushort **)puVar1 & 1) == 0)) ||
           (*(long *)PTR_DAT_04bc1530 == 0)) {
          if ((*(ushort *)(lVar6 + 0x28) >> 7 & 1) == 0) {
            sVar8 = *(short *)(lVar6 + 0x2c);
            goto LAB_0377198c;
          }
        }
        else {
          lVar10 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
          if ((*(long **)(lVar10 + 0x11b0) == (long *)0x0) ||
             (puVar9 = (undefined8 *)**(long **)(lVar10 + 0x11b0), puVar9 == (undefined8 *)0x0)) {
            sVar8 = *(short *)(*(long *)(lVar10 + 0x1198) + *(long *)(lVar10 + 0x1190) + 2);
          }
          else {
            uVar4 = (**(code **)*puVar9)();
            sVar8 = *(short *)(*(long *)(lVar10 + 0x1198) + *(long *)(lVar10 + 0x1190) + 2);
            if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x11b0) != 0)) &&
               (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x11b0) + 8),
               puVar9 != (undefined8 *)0x0)) {
              (**(code **)*puVar9)();
            }
          }
LAB_0377198c:
          if ((sVar8 != -1) && (*(int *)(lVar6 + 0x1a48) != 2)) goto LAB_03771ad4;
        }
        fVar12 = fVar12 + 5.0;
        goto LAB_03771ad0;
      }
      local_58 = fVar13 + 5.0;
      local_60 = CONCAT44(local_60._4_4_,fVar12 + 10.0);
      goto LAB_03771ad4;
    }
    if (DAT_05ac0a90 == iVar3) {
      lVar6 = 0;
LAB_03771a34:
      local_78 = 0;
      iVar3 = (&DAT_05ac0a9c)[lVar6 * 4];
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      local_80 = PTR_DAT_04bb2010 + 0x10;
      uStack_68 = 0;
      local_70 = local_80;
      FUN_01811430(&local_88);
      local_58 = (float)(int)local_78._4_4_ * 5.0 + 5.0;
      fVar12 = (float)(int)local_78 * 5.0 + 5.0 + 10.0;
      local_60 = CONCAT44(local_60._4_4_,fVar12);
      if (((iVar3 == 10) || (iVar3 == 3)) || (iVar3 == 9)) goto LAB_03771ac8;
      goto LAB_03771ad4;
    }
    if (DAT_05ac0aa0 == iVar3) {
      lVar6 = 1;
      goto LAB_03771a34;
    }
    if (DAT_05ac0ab0 == iVar3) {
      lVar6 = 2;
      goto LAB_03771a34;
    }
    if (DAT_05ac0ac0 == iVar3) {
      lVar6 = 3;
      goto LAB_03771a34;
    }
    if (DAT_05ac0ad0 == iVar3) {
      lVar6 = 4;
      goto LAB_03771a34;
    }
    if (DAT_05ac0ae0 == iVar3) {
      lVar6 = 5;
      goto LAB_03771a34;
    }
    if (DAT_05ac0af0 == iVar3) {
      lVar6 = 6;
      goto LAB_03771a34;
    }
    if (DAT_05ac0b00 == iVar3) {
      lVar6 = 7;
      goto LAB_03771a34;
    }
    if (DAT_05ac0b10 == iVar3) {
      lVar6 = 8;
      goto LAB_03771a34;
    }
    if (DAT_05ac0b20 == iVar3) {
      lVar6 = 9;
      goto LAB_03771a34;
    }
  }
  local_60 = local_60 & 0xffffffff;
LAB_03771b08:
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_60;
  return auVar11;
}

