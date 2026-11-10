
void FUN_00261d00(undefined8 param_1,long param_2,ushort param_3)

{
  void *__s;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 local_64;
  ErrorResultVariant aEStack_60 [12];
  undefined4 local_54;
  
  if (param_3 < 0x21) {
    *(ushort *)(param_2 + 0x8d70) = param_3;
    if (param_3 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_2 + 0x458) == 0) {
          local_64 = 0x10c08;
          goto LAB_00261de0;
        }
        lVar2 = FUN_002237a8(param_2 + 0x448);
        lVar1 = 0;
        if (lVar2 != 0) {
          lVar1 = lVar2 - *(int *)(param_2 + 0x45c);
        }
        __s = (void *)(lVar1 + 0x10);
        memset(__s,0,0x438);
        FUN_00232ac4(__s);
        uVar3 = FUN_002236bc(param_2 + 0x430,param_2 + 0x430,lVar1);
        *(undefined8 *)(lVar1 + 0x440) = 0;
        FUN_00261af8(uVar3,__s);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(param_2 + 0x8d70));
    }
    local_64 = 0;
  }
  else {
    local_64 = 0x10c07;
  }
LAB_00261de0:
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_54);
  FUN_002296c4(param_1,&local_64);
  return;
}

