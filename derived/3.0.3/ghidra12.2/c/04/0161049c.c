
void FUN_0161049c(long *param_1,uint param_2,long param_3,long *param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  undefined4 local_24;
  
  if ((*param_1 != 0) && (param_1[6] != 0)) {
    uVar1 = param_2;
    if (*(uint *)(param_1 + 5) <= param_2) {
      uVar1 = 0;
    }
    if ((((param_3 != 0) &&
         (uVar1 = *(uint *)(param_1[6] + (long)(int)uVar1 * 4),
         uVar1 < 0xffff0000 && (uVar1 & 0xffff) != 0xffff)) && (*(long *)(param_3 + 8) != 0)) &&
       (lVar2 = *(long *)(*(long *)(param_3 + 8) + 0x20), lVar2 != 0)) {
      (**(code **)(*param_4 + 0x18))(param_4);
      lVar2 = FUN_038fe510(lVar2,param_4[1]);
      if (lVar2 != 0) {
        local_24 = 0xffffffff;
        if ((param_1[6] != 0) && (*param_1 != 0)) {
          if (*(uint *)(param_1 + 5) <= param_2) {
            param_2 = 0;
          }
          local_24 = *(undefined4 *)(param_1[6] + (long)(int)param_2 * 4);
        }
        FUN_039a9300(*param_1,lVar2,param_5,&local_24);
      }
    }
  }
  return;
}

