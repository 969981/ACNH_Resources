
void FUN_030bbb3c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  undefined *local_60;
  undefined4 local_58;
  
  uVar2 = FUN_03463a4c(param_2,param_3,*(undefined8 *)(param_1 + 0x270));
  puVar1 = PTR_DAT_04bc0cb8;
  local_65 = 0;
  local_168 = 0x100;
  local_170 = local_164;
  local_164[0] = 0;
  plVar4 = *(long **)(param_1 + 0x260);
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  local_60 = PTR_DAT_04bc0cb8 + 0x10;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_60);
  (**(code **)(plVar4[3] + 0x30))(&local_178,plVar4[1]);
  if (((param_5 != 0) && ((uVar2 & 1) == 0)) && (*(long *)(param_5 + 8) != -1)) {
    lVar3 = *(long *)(param_1 + 0x270);
    *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_5 + 8);
    *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_5 + 0x10);
    *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_5 + 0x18);
  }
  if ((0 < param_4) && (plVar4 = *(long **)(param_1 + 0x260), plVar4 != (long *)0x0)) {
    *(int *)(param_1 + 0x278) = param_4;
    local_170._0_4_ = 0x14;
    *(float *)(param_1 + 0x27c) = 255.0 / (float)param_4;
    local_178 = puVar1 + 0x10;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_178);
    (**(code **)(plVar4[3] + 0x158))(plVar4[1],1);
    plVar4 = *(long **)(param_1 + 0x268);
    if (plVar4 != (long *)0x0) {
      local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0x14);
      local_178 = puVar1 + 0x10;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_178);
      (**(code **)(plVar4[3] + 0x158))(plVar4[1],1);
    }
  }
  return;
}

