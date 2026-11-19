
void FUN_03c7f3c0(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_188 [16];
  undefined *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  lVar3 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x408) + 8);
  local_168 = 0x100;
  local_65 = 0;
  local_170 = local_164;
  local_164[0] = 0;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_178,"%s.msbt",param_2[1]);
  if (*(long *)(lVar3 + 0x10) != lVar3 + 8) {
    lVar4 = (long)*(int *)(lVar3 + 0x1c);
    lVar2 = *(long *)(lVar3 + 0x10) - lVar4;
    do {
      if ((lVar2 != 0) && (lVar1 = FUN_03d54360(lVar2,&local_178), lVar1 != 0)) {
        (**(code **)(*param_3 + 0x18))(param_3);
        FUN_03b0d7c0(auStack_188,lVar1,param_3[1]);
        local_178 = PTR_DAT_04bc0878 + 0x10;
        local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xb);
        (**(code **)(*param_1 + 0x18))(param_1,&local_178);
        (**(code **)(param_1[3] + 0x5f0))(param_1[1],auStack_188,param_4);
        return;
      }
      lVar2 = *(long *)(lVar2 + lVar4 + 8) - lVar4;
    } while (lVar2 != (lVar3 + 8) - lVar4);
  }
  return;
}

