
undefined4 FUN_01815d0c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  char *pcVar3;
  undefined4 uVar4;
  long lVar5;
  float fVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  if (0 < *(int *)(param_1 + 0x414)) {
    return 0;
  }
  lVar2 = (**(code **)(**(long **)(param_1 + 0x300) + 0xf8))();
  fVar6 = (float)FUN_01a1fd20(lVar2,0);
  local_28 = 0;
  lVar5 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0xa8) != 0)) && (*(char *)(lVar5 + 0x11c8) == '\0')) {
    FUN_0093a950(lVar5 + 0x28,lVar2,&local_28);
  }
  local_24 = local_28;
  lVar5 = FUN_009807cc(DAT_04cfab78 + 8,local_28);
  if (((lVar5 == 0) ||
      (pcVar3 = (char *)FUN_009823a0(lVar5,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
      pcVar3 == (char *)0x0)) || (*pcVar3 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (*(float *)(lVar2 + 4) <= fVar6) {
    uVar1 = uVar4;
  }
  return uVar1;
}

