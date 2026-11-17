
void FUN_02a561dc(long param_1,undefined4 param_2,int param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  if (*param_4 < 8) {
    local_2c = *(undefined4 *)(param_1 + 8);
    uStack_28 = *(undefined4 *)(param_1 + 0xc);
    uVar1 = 4;
    if (param_3 != 5) {
      uVar1 = 2;
    }
    local_24 = param_2;
    lVar2 = FUN_0299a520(*(long *)PTR_DAT_04bb26a8 + 0x7c8,&local_2c,uVar1);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 9) = 1;
      bVar3 = *param_4;
      *(ushort *)(lVar2 + 0x88) = *(ushort *)(lVar2 + 0x88) | 0x100;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      *(byte *)(lVar2 + 0x8b) = bVar3;
    }
  }
  return;
}

