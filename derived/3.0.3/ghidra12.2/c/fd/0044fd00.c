
undefined8 FUN_0044fd00(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [512];
  long local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_48 = -0x8000000000000000;
  uVar4 = FUN_00426fc0(param_2);
  if ((int)uVar4 < 1) {
    lVar5 = 0;
    uVar9 = 0;
    bVar2 = SBORROW4(0,uVar4);
    iVar1 = -uVar4;
    bVar3 = uVar4 == 0;
    if (0 < (int)uVar4) goto LAB_0044fd78;
LAB_0044fdc4:
    if (!bVar3 && iVar1 < 0 == bVar2) {
      local_48 = CONCAT44(local_48._4_4_,uVar4);
    }
    plVar6 = (long *)FUN_00426e90(param_2,0x400000);
    if (plVar6 == (long *)0x0) goto LAB_0044fddc;
LAB_0044fda8:
    pcVar12 = (code *)*plVar6;
    if (pcVar12 == (code *)0x0) goto LAB_0044fddc;
  }
  else {
    lVar5 = FUN_00426720(PTR_DAT_048607c0,uVar4,1,0,0,(long)&local_48 + 4);
    bVar2 = SBORROW4((uint)local_48,uVar4);
    iVar1 = (uint)local_48 - uVar4;
    bVar3 = (uint)local_48 == uVar4;
    uVar9 = (uint)local_48;
    local_50 = lVar5;
    if ((int)uVar4 <= (int)(uint)local_48) goto LAB_0044fdc4;
LAB_0044fd78:
    local_48 = CONCAT44(local_48._4_4_,uVar4);
    memset((void *)(lVar5 + (int)uVar9),0,(ulong)(uVar4 + ~uVar9) + 1);
    lVar5 = local_50;
    plVar6 = (long *)FUN_00426e90(param_2,0x400000);
    if (plVar6 != (long *)0x0) goto LAB_0044fda8;
LAB_0044fddc:
    plVar6 = (long *)FUN_00426e90(param_2,0x40);
    if ((plVar6 == (long *)0x0) || (pcVar12 = (code *)*plVar6, pcVar12 == (code *)0x0)) {
      FUN_004426d0(auStack_260,auStack_250,0x200);
      FUN_0043ac90(auStack_260,
                   "Attempted to get the vtable from a non-constructible type, it must have either an accessible default constructor or a bypass constructor"
                  );
      FUN_004221e0(0xabbac0ae,auStack_250,
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Core/Detail/hkReflectTypeDetail.cpp"
                   ,0xf6);
      FUN_00442760(auStack_260);
      uVar13 = 0x80040200;
      uVar4 = local_48._4_4_;
      goto joined_r0x0044fe8c;
    }
  }
  uVar7 = FUN_00427110(param_2,&DAT_04c14570);
  if ((uVar7 & 1) == 0) {
    (*pcVar12)(lVar5,param_2,1);
    iVar1 = (int)param_3[1];
    lVar5 = local_50;
  }
  else {
    FUN_00426fc0(param_2);
    uVar13 = *(undefined8 *)(lVar5 + 8);
    (*pcVar12)(lVar5,param_2,1);
    *(undefined8 *)(lVar5 + 8) = uVar13;
    iVar1 = (int)param_3[1];
    lVar5 = local_50;
  }
  if (0 < iVar1) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      ((long *)(*param_3 + lVar10))[1] = *(long *)(*(long *)(*param_3 + lVar10) + lVar5);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar11 < (int)param_3[1]);
  }
  local_50 = lVar5;
  puVar8 = (undefined8 *)FUN_00426e90(param_2,0x100);
  if ((puVar8 != (undefined8 *)0x0) && ((code *)*puVar8 != (code *)0x0)) {
    (*(code *)*puVar8)(lVar5,param_2,1);
  }
  uVar13 = 0;
  uVar4 = local_48._4_4_;
joined_r0x0044fe8c:
  if ((-1 < local_48) && (local_48 = (ulong)uVar4 << 0x20, local_50 != 0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_50,1,uVar4 & 0x3fffffff);
  }
  return uVar13;
}

