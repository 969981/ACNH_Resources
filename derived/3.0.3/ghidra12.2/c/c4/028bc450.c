
undefined8 FUN_028bc450(long *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = DAT_05ae7790;
  if (param_2 == 0) {
    return 0;
  }
  if (((int)param_1[0xb] != 0) ||
     (((DAT_05ae7790 != 0 &&
       (lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68)),
       *(long *)(lVar3 + 0x60) != lVar4)) || (lVar3 = DAT_05ae7790, DAT_0537d558 == (long *)0x0))))
  {
    return 0;
  }
  lVar4 = *DAT_0537d558;
  bVar2 = *(byte *)(lVar4 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar4 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar4 + 0x472) != bVar2)) {
      return 0;
    }
  }
  if (((int)param_1[0xb] == 0) &&
     ((DAT_05ae7790 == 0 ||
      (lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68)),
      *(long *)(lVar3 + 0x60) == lVar4)))) {
    FUN_028b9038(param_1 + 1);
    *(undefined1 *)((long)param_1 + 0x10c) = 0;
    param_1[0x20] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  *param_1 = param_2;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined2 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined2 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined2 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined2 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined2 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  *(undefined2 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined2 *)(param_2 + 0x68) = 0;
  *(undefined2 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(undefined8 *)(param_2 + 0x74) = 0;
  *(undefined8 *)(param_2 + 0x6c) = 0;
  FUN_03ebb160(param_1 + 10,1);
  return 1;
}

