
void FUN_005d8210(long param_1,undefined8 param_2,int param_3,undefined8 *param_4,undefined4 param_5
                 ,undefined8 param_6)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 local_68;
  
  if (param_3 == 0) {
    return;
  }
  puVar1 = (undefined4 *)FUN_0053b100(*(undefined8 *)(param_1 + 0x38));
  local_68 = CONCAT44(*puVar1,*puVar1);
  lVar2 = FUN_0043c4e0(DAT_04c6f050);
  lVar3 = DAT_04c6f058;
  if (lVar2 != 0) {
    lVar3 = lVar2;
  }
  uVar6 = (ulong)(int)(param_3 * 0x10 + 0xbfU & 0xffffff80);
  if (uVar6 <= *(ulong *)(lVar3 + 0x10)) {
    lVar2 = *(long *)(lVar3 + 0x18);
    if (lVar2 + uVar6 <= *(ulong *)(lVar3 + 0x20)) {
      *(ulong *)(lVar3 + 0x18) = lVar2 + uVar6;
      goto LAB_005d82c0;
    }
  }
  lVar2 = FUN_00439510(lVar3,uVar6);
LAB_005d82c0:
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a00(lVar3,"TtsortTriangleAabbs");
  }
  FUN_005d7080(param_1,param_2,param_3,lVar2);
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a70(lVar3,&DAT_04085310);
  }
  auVar7 = FUN_0043c4e0(DAT_04c6f410);
  uVar5 = auVar7._8_8_;
  if (auVar7._0_8_ != 0) {
    FUN_00443a00(auVar7._0_8_,"TtcollideParticlesAndTriangles");
    uVar5 = extraout_x1;
  }
  FUN_005d7580(*(undefined8 *)(param_1 + 0x28),uVar5,param_5,*param_4,param_2,param_3,lVar2,
               &local_68,param_6);
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a70(lVar3,&DAT_04085310);
  }
  lVar4 = FUN_0043c4e0(DAT_04c6f050);
  lVar3 = DAT_04c6f058;
  if (lVar4 != 0) {
    lVar3 = lVar4;
  }
  if (((*(ulong *)(lVar3 + 0x10) < uVar6) || (*(long *)(lVar3 + 0x18) != lVar2 + uVar6)) ||
     (*(long *)(lVar3 + 0x28) == lVar2)) {
    FUN_00439980(lVar3,lVar2,uVar6);
  }
  else {
    *(long *)(lVar3 + 0x18) = lVar2;
  }
  return;
}

