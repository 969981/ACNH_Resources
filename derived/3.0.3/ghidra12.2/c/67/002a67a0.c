
void FUN_002a67a0(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  Result *pRVar3;
  ulong uVar4;
  long lVar5;
  int local_64 [4];
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if ((param_3 == (undefined1 *)0x0) || (param_4 < 2)) {
LAB_002a67e0:
    local_54 = 0x10c07;
  }
  else {
    *(undefined1 *)(param_2 + 8) = *param_3;
    bVar2 = param_3[1];
    *(byte *)(param_2 + 9) = bVar2;
    if (0x20 < bVar2) goto LAB_002a67e0;
    if (bVar2 != 0) {
      param_3 = param_3 + 2;
      if (param_4 < 0x10) {
        uVar4 = 0;
        do {
          local_54 = 0x10c07;
          local_44 = 0;
          *(undefined1 *)(param_2 + uVar4 + 10) = *param_3;
          lVar5 = param_2 + uVar4 * 2;
          *(ushort *)(lVar5 + 0x2a) = *(ushort *)(param_3 + 1) >> 8 | *(ushort *)(param_3 + 1) << 8;
          *(ushort *)(lVar5 + 0x6a) = *(ushort *)(param_3 + 3) >> 8 | *(ushort *)(param_3 + 3) << 8;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
          FUN_002296c4(local_64,&local_54);
          if (local_64[0] != 0) goto LAB_002a695c;
          uVar4 = uVar4 + 1;
          param_3 = param_3 + 0x15;
        } while (uVar4 < *(byte *)(param_2 + 9));
      }
      else {
        uVar4 = 0;
        lVar5 = 0xac;
        do {
          *(undefined1 *)(param_2 + uVar4 + 10) = *param_3;
          lVar1 = param_2 + uVar4 * 2;
          *(ushort *)(lVar1 + 0x2a) = *(ushort *)(param_3 + 1) >> 8 | *(ushort *)(param_3 + 1) << 8;
          *(ushort *)(lVar1 + 0x6a) = *(ushort *)(param_3 + 3) >> 8 | *(ushort *)(param_3 + 3) << 8;
          memcpy((void *)(param_2 + lVar5),param_3 + 5,0x10);
          local_54 = 0;
          local_44 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
          FUN_002296c4(local_64,&local_54);
          if (local_64[0] != 0) goto LAB_002a695c;
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 0x10;
          param_3 = param_3 + 0x15;
        } while (uVar4 < *(byte *)(param_2 + 9));
      }
    }
    local_54 = 0;
  }
  pRVar3 = (Result *)local_64;
  local_64[0] = 0;
LAB_002a67fc:
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,pRVar3);
  FUN_002296c4(param_1,&local_54);
  return;
LAB_002a695c:
  local_54 = 0x10c07;
  pRVar3 = (Result *)&local_44;
  local_44 = 0;
  goto LAB_002a67fc;
}

