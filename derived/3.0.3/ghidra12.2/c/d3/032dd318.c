
/* WARNING: Removing unreachable block (ram,0x032dd414) */
/* WARNING: Removing unreachable block (ram,0x032dd39c) */
/* WARNING: Removing unreachable block (ram,0x032dd36c) */
/* WARNING: Removing unreachable block (ram,0x032dd350) */
/* WARNING: Removing unreachable block (ram,0x032dd37c) */
/* WARNING: Removing unreachable block (ram,0x032dd3d8) */
/* WARNING: Removing unreachable block (ram,0x032dd450) */

undefined1  [16]
FUN_032dd318(long *param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5,
            uint param_6)

{
  undefined1 auVar1 [16];
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  bVar2 = true;
  if (param_1[1] != 0) {
    bVar2 = *param_1 == param_1[1];
  }
  if (param_3 < 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *param_1;
  }
  if (param_4 < 0) {
    bVar2 = true;
  }
  if (bVar2) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1[1];
  }
  local_50 = 0;
  if (lVar3 != 0) {
    local_50 = FUN_038c6d48(param_3,param_2,lVar3,8,param_5,param_6 & 1);
  }
  uStack_48 = 0;
  if (lVar4 != 0) {
    uStack_48 = FUN_038c6d48(param_4,param_2,lVar4,8,param_5,param_6 & 1);
  }
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}

