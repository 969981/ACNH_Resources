
void FUN_004c7e70(long *param_1,uint param_2,long *param_3,int param_4,undefined8 param_5,
                 long *param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((param_2 >> 4 & 1) == 0) {
    if ((param_2 >> 5 & 1) != 0) {
      lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x68,0);
      FUN_00453e60(lVar3,0,param_4,0,0,&DAT_04c6fb68,&DAT_0408562c,0);
      FUN_004c7e70(param_1,param_2 & 0xffffffdf,param_3,0);
      iVar1 = FUN_00426fc0(*(undefined8 *)(lVar3 + 0x18));
      uVar2 = FUN_00427030(*(undefined8 *)(lVar3 + 0x18));
      FUN_0044e030(lVar3,iVar1 * param_4,uVar2);
      uVar10 = *(undefined8 *)(lVar3 + 0x18);
      lVar4 = FUN_004270a0(lVar3);
      *(undefined8 *)(lVar4 + 0x10) = uVar10;
      goto joined_r0x004c7f38;
    }
    switch(param_2) {
    case 1:
      if (param_6 != (long *)0x0) {
        *param_6 = (long)&DAT_04c12120;
      }
      break;
    case 2:
      if (param_6 != (long *)0x0) {
        *param_6 = (long)&DAT_04c12228;
      }
      break;
    case 3:
      if (param_6 != (long *)0x0) {
        *param_6 = (long)&DAT_04c12438;
      }
      break;
    case 4:
      if (param_6 != (long *)0x0) {
        *param_6 = (long)&DAT_04c13c28;
      }
      break;
    case 5:
      if (param_6 != (long *)0x0) {
        *param_6 = (long)&DAT_04c20ec8;
      }
      break;
    case 6:
      if (param_6 != (long *)0x0) {
        *param_6 = (long)&DAT_04c1af98;
      }
      break;
    case 7:
      if (param_6 != (long *)0x0) {
        *param_6 = (long)&DAT_04c1b1a8;
      }
      break;
    case 8:
      lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x70,0);
      FUN_00453c80(lVar3,0x22222222,&DAT_040f28c8,0);
      *(long *)(lVar3 + 0x20) = param_1[0x16];
      if ((*param_3 == param_3[1]) || (iVar1 = FUN_004c8350(param_7,param_3), iVar1 < 0)) {
        puVar11 = &DAT_04c11f18;
LAB_004c8200:
        *(undefined **)(lVar3 + 0x18) = puVar11;
        lVar4 = FUN_004270a0(lVar3);
        *(undefined **)(lVar4 + 0x10) = puVar11;
      }
      else {
        uStack_58 = FUN_0047b100(param_1[0x22],param_3,iVar1);
        local_60 = 0xffffffffffffffff;
        puVar5 = (ulong *)FUN_004706d0(param_1 + 0xd,&uStack_58,&local_60);
        uVar8 = *puVar5;
        if (((-1 < (int)uVar8) && ((int)uVar8 != 0x50000000)) &&
           (puVar7 = *(undefined8 **)
                      (param_1[0xb] +
                      (-(uVar8 >> 0x1f & 1) & 0xfffffff800000000 | (uVar8 & 0xffffffff) << 3)),
           puVar7 != (undefined8 *)0x0)) {
          puVar11 = (undefined *)*puVar7;
          goto LAB_004c8200;
        }
        uVar6 = *(uint *)(param_1 + 0x1a);
        if (uVar6 == (*(uint *)((long)param_1 + 0xd4) & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607b8,param_1 + 0x19,0x20);
          uVar6 = *(uint *)(param_1 + 0x1a);
        }
        *(uint *)(param_1 + 0x1a) = uVar6 + 1;
        puVar7 = (undefined8 *)(param_1[0x19] + (long)(int)uVar6 * 0x20);
        *puVar7 = 0;
        FUN_0043bf00(puVar7,*param_3,param_3[1]);
        *(int *)(puVar7 + 1) = iVar1;
        puVar7[2] = 0;
        puVar7[3] = lVar3 + 0x18;
        uVar6 = *(uint *)(param_1 + 0x1a);
        if (uVar6 == (*(uint *)((long)param_1 + 0xd4) & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607b8,param_1 + 0x19,0x20);
          uVar6 = *(uint *)(param_1 + 0x1a);
        }
        *(uint *)(param_1 + 0x1a) = uVar6 + 1;
        puVar7 = (undefined8 *)(param_1[0x19] + (long)(int)uVar6 * 0x20);
        *puVar7 = 0;
        lVar4 = FUN_004270a0(lVar3);
        FUN_0043bf00(puVar7,*param_3,param_3[1]);
        *(int *)(puVar7 + 1) = iVar1;
        puVar7[2] = 0;
        puVar7[3] = lVar4 + 0x10;
      }
      if (param_6 != (long *)0x0) {
        *param_6 = lVar3;
      }
      break;
    case 9:
      if ((*param_3 != param_3[1]) && (iVar1 = FUN_004c8350(param_7,param_3), -1 < iVar1)) {
        uStack_58 = FUN_0047b100(param_1[0x22],param_3,iVar1);
        local_60 = 0xffffffffffffffff;
        puVar5 = (ulong *)FUN_004706d0(param_1 + 0xd,&uStack_58,&local_60);
        uVar8 = *puVar5;
        if ((-1 < (int)uVar8) &&
           (((int)uVar8 != 0x50000000 &&
            (plVar9 = *(long **)(param_1[0xb] +
                                (-(uVar8 >> 0x1f & 1) & 0xfffffff800000000 |
                                (uVar8 & 0xffffffff) << 3)), plVar9 != (long *)0x0)))) {
          if (param_6 == (long *)0x0) {
            return;
          }
          *param_6 = *plVar9;
          return;
        }
        if (param_6 != (long *)0x0) {
          *param_6 = 0x22222222;
        }
        uVar6 = *(uint *)(param_1 + 0x1a);
        if (uVar6 == (*(uint *)((long)param_1 + 0xd4) & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607b8,param_1 + 0x19,0x20);
          uVar6 = *(uint *)(param_1 + 0x1a);
        }
        *(uint *)(param_1 + 0x1a) = uVar6 + 1;
        puVar7 = (undefined8 *)(param_1[0x19] + (long)(int)uVar6 * 0x20);
        *puVar7 = 0;
        FUN_0043bf00(puVar7,*param_3,param_3[1]);
        *(int *)(puVar7 + 1) = iVar1;
        puVar7[2] = 0;
        puVar7[3] = param_6;
        return;
      }
    case 0:
      if (param_6 != (long *)0x0) {
        *param_6 = (long)&DAT_04c11f18;
      }
      break;
    case 10:
      if (param_6 != (long *)0x0) {
        *param_6 = (long)&DAT_04c12000;
      }
      break;
    case 0xb:
      FUN_004c7790(param_1,param_6,param_3,param_7);
      return;
    }
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x40,0);
    FUN_00453d10(lVar3,0,0x18,8,param_1[0x14],"hkArray",0);
    FUN_004c7e70(param_1,param_2 & 0xffffffef,param_3,0);
joined_r0x004c7f38:
    if (param_6 != (long *)0x0) {
      *param_6 = lVar3;
    }
  }
  return;
}

