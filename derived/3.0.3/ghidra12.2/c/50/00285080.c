
undefined8
FUN_00285080(long param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined1 *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  uint local_9c;
  int local_98 [4];
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    if ((param_7[1] == '\0') &&
       (lVar3 = FUN_002a9208(*(undefined8 *)(param_1 + 0x28),0), lVar3 != 0)) {
      iVar4 = 0;
      do {
        lVar3 = FUN_002a9208(*(undefined8 *)(param_1 + 0x28),iVar4);
        uVar2 = FUN_002aa1e0(param_1,lVar3,param_7[2],param_5,param_7[3],param_6);
        if (((uVar2 & 1) != 0) &&
           ((*(uint *)(lVar3 + (ulong)(param_2 >> 5 & 7) * 4 + 0x5fc) & 1 << (ulong)(param_2 & 0x1f)
            ) != 0)) {
          if (lVar3 != 0) goto LAB_0028520c;
          break;
        }
        iVar4 = iVar4 + 1;
        lVar3 = FUN_002a9208(*(undefined8 *)(param_1 + 0x28),iVar4);
      } while (lVar3 != 0);
    }
    FUN_00227258(&local_88);
    uVar1 = FUN_002ba790(DAT_04c61168);
    FUN_002b5350(local_98,uVar1,&local_88,param_2);
    if (local_98[0] == 0) {
      memset(&local_9c,0,4);
      local_9c = local_9c | 1 << (ulong)(param_2 & 0x1f);
      lVar3 = FUN_0026e630(param_1,&local_9c,&local_88,param_6,param_7);
      if (lVar3 != 0) {
        local_88 = PTR_DAT_04bcba18 + 0x10;
        FUN_0021f584(auStack_80);
LAB_0028520c:
        uVar1 = FUN_002aa480(param_1,lVar3,param_4);
        FUN_002ac58c(param_1 + 0x30,lVar3,uVar1,param_3,*param_7,1,1,0);
        *(uint *)(param_1 + 0x974) = *(uint *)(param_1 + 0x974) | param_3;
        return 1;
      }
    }
    local_88 = PTR_DAT_04bcba18 + 0x10;
    FUN_0021f584(auStack_80);
    uVar1 = 0;
  }
  return uVar1;
}

