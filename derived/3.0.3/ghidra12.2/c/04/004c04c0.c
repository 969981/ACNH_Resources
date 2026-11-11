
undefined8
FUN_004c04c0(long param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,int param_5,
            undefined8 *param_6,long param_7)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  uint uStack_64;
  
  uVar8 = FUN_004adce0(*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  iVar16 = (int)((ulong)(param_7 - (long)param_6) >> 4);
  if (iVar16 < 1) {
    uStack_64 = 0;
  }
  else {
    uStack_64 = 0;
    uVar14 = (ulong)(param_7 - (long)param_6) >> 4 & 0xffffffff;
    puVar15 = param_6;
    do {
      uVar3 = (int)*puVar15 * -0x61c8864f;
      uVar12 = (int)((ulong)*puVar15 >> 0x20) * -0x61c8864f;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar2 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = uVar2 + 0x9e3779b9 + (uVar2 >> 2) + uVar3 * 0x40 ^ uVar3;
      uStack_64 = uStack_64 * 0x40 + -0x61c88647 + uVar3 + (uVar3 >> 2) ^ uStack_64;
      uVar14 = uVar14 - 1;
      puVar15 = puVar15 + 2;
    } while (uVar14 != 0);
  }
  plVar1 = (long *)(param_1 + 0x20);
  local_78 = param_3;
  uStack_70 = uVar8;
  local_68 = param_5;
  uVar3 = FUN_004c46d0(plVar1,&local_78);
  if (*(uint *)(param_1 + 0x28) == uVar3) {
    if (param_5 == 0) {
      plVar9 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x60))();
      uVar11 = (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
      pcVar13 = *(code **)(*plVar9 + 0x10);
      if ((param_4 & 1) == 0) {
        if (iVar16 < 1) {
          uVar10 = (*pcVar13)(plVar9,0x40,0);
          FUN_00453d10(uVar10,param_3,0x18,8,uVar11,uVar8,0x1000);
        }
        else {
          uVar10 = (*pcVar13)(plVar9,0x98,0);
          FUN_00453da0(uVar10,param_3,0x18,8,uVar11,uVar8,0x1000);
        }
      }
      else {
        uVar10 = (*pcVar13)(plVar9,0x78,0);
        FUN_00453d40(uVar10,param_3,0x18,8,uVar11,uVar8,0x1000);
      }
    }
    else {
      iVar4 = FUN_00426fc0(param_3);
      iVar5 = FUN_00427030(param_3);
      iVar6 = FUN_00427030(param_3);
      plVar9 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x60))();
      iVar4 = ((iVar4 + iVar5) - 1U & -iVar6) * param_5;
      uVar7 = FUN_00427030(param_3);
      pcVar13 = *(code **)(*plVar9 + 0x10);
      if ((param_4 & 1) == 0) {
        if (iVar16 < 1) {
          uVar10 = (*pcVar13)(plVar9,0x40,0);
          FUN_00453ec0(uVar10,param_3,param_5,iVar4,uVar7,&DAT_04c6fb68,uVar8,0x1000);
        }
        else {
          uVar10 = (*pcVar13)(plVar9,0x98,0);
          FUN_00453f00(uVar10,param_3,param_5,iVar4,uVar7,&DAT_04c6fb68,uVar8,0x1000,param_6,param_7
                      );
        }
      }
      else {
        uVar10 = (*pcVar13)(plVar9,0x68,0);
        FUN_00453e60(uVar10,param_3,param_5,iVar4,uVar7,&DAT_04c6fb68,uVar8,0x1000);
      }
    }
    uVar12 = *(uint *)(param_1 + 0x28);
    if (uVar12 == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar1,0x20);
      uVar12 = *(uint *)(param_1 + 0x28);
    }
    puVar15 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)(int)uVar12 * 0x20);
    *puVar15 = local_78;
    puVar15[1] = uStack_70;
    puVar15[2] = CONCAT44(uStack_64,local_68);
    puVar15[3] = uVar10;
    *(uint *)(param_1 + 0x28) = uVar12 + 1;
  }
  return *(undefined8 *)(*plVar1 + ((long)((ulong)uVar3 << 0x20) >> 0x1b) + 0x18);
}

