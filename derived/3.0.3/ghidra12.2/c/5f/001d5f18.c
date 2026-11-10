
void FUN_001d5f18(undefined8 param_1,uint *param_2,undefined2 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint *puVar3;
  byte *pbVar4;
  
  *param_2 = 0;
  puVar2 = PTR_DAT_04bcc738;
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar3 != 0) {
      pbVar4 = (byte *)(*(long *)(puVar2 + 0x10) + (ulong)*puVar3);
      goto LAB_001d5f6c;
    }
  }
  pbVar4 = puVar2 + 0x18;
LAB_001d5f6c:
  bVar1 = *pbVar4;
  *param_2 = (uint)bVar1;
  puVar2 = PTR_DAT_04bcc740;
  *param_3 = 0;
  *param_2 = (uint)bVar1 | *(int *)puVar2 << 8;
  return;
}

