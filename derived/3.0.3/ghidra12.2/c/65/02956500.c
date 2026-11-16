
undefined8
FUN_02956500(long param_1,uint *param_2,uint param_3,undefined8 param_4,byte *param_5,
            undefined8 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  short sVar4;
  long lVar5;
  uint local_44;
  uint local_28;
  uint local_24;
  
  *param_2 = param_3;
  uVar3 = (param_3 & 0xffff) - (uint)*(ushort *)(param_1 + 0xb50);
  if ((*(uint *)(param_1 + 0xb30) <= uVar3) ||
     (*(long *)(*(long *)(param_1 + 0xb38) + (long)(int)uVar3 * 8) == 0)) {
    return 0;
  }
  lVar5 = FUN_02953cfc(param_1,param_3,param_4);
  if (lVar5 != 0) {
    local_24 = 0;
    if ((((*param_5 & 1) != 0) && (sVar4 = FUN_02953e40(lVar5,param_6,&local_24), sVar4 != 0)) &&
       (local_24 < 3)) {
      *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_24 & 0x1f));
    }
    local_28 = 1;
    if ((((*param_5 & 2) != 0) && (sVar4 = FUN_02953e40(lVar5,param_6,&local_28), sVar4 != 0)) &&
       (local_28 < 3)) {
      *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_28 & 0x1f));
    }
    local_44 = 2;
    if ((((*param_5 & 4) != 0) && (sVar4 = FUN_02953e40(lVar5,param_6,&local_44), sVar4 != 0)) &&
       (local_44 < 3)) {
      *(byte *)(param_2 + 1) = (byte)param_2[1] | (byte)(1 << (ulong)(local_44 & 0x1f));
    }
  }
  bVar2 = (byte)param_2[1];
  cVar1 = (bVar2 >> 1 & 1) + (bVar2 & 1) + (bVar2 >> 2 & 1);
  *(bool *)(param_2 + 3) = cVar1 != '\0';
  bVar2 = *param_5;
  *(bool *)((long)param_2 + 0xd) =
       cVar1 == (byte)((bVar2 >> 1 & 1) + (bVar2 & 1) + (bVar2 >> 2 & 1));
  return 1;
}

