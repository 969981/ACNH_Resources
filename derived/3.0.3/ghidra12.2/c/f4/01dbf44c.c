
void FUN_01dbf44c(undefined1 *param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined1 *puVar5;
  
  lVar4 = *(long *)(param_2 + 0x10);
  iVar2 = *(int *)(lVar4 + 0x380);
  if ((iVar2 == 0xf || iVar2 == 0x18) ||
     ((iVar2 == 0x26 && (*(int *)(lVar4 + 0x388) == 0x18 || *(int *)(lVar4 + 0x388) == 0xf)))) {
    lVar4 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar4 + 0x473);
    puVar5 = PTR_DAT_04bc1220;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar4 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        puVar5 = (undefined1 *)(lVar4 + 0x473);
      }
    }
  }
  else {
    puVar5 = (undefined1 *)(lVar4 + 0xaa5);
  }
  *param_1 = *puVar5;
  return;
}

