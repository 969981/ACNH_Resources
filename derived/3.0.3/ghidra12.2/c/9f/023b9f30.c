
void FUN_023b9f30(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  byte bVar4;
  uint local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  *(undefined2 *)(param_1 + 0x19fc) = 0x100;
  *(undefined4 *)(param_1 + 0x19f8) = 10;
  *(undefined8 *)(param_1 + 0x19f0) = 0;
  if (((param_2 != 0x1a) && (param_2 != 0x8f)) && (lVar2 = *(long *)(param_1 + 0x60), lVar2 != 0)) {
    *(undefined4 *)(lVar2 + 0x12d0) = 0;
    *(undefined1 *)(lVar2 + 0x142d) = 0;
    **(undefined1 **)(lVar2 + 0x12e0) = 0;
    *(undefined4 *)(lVar2 + 0x1330) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x1428) = 0;
    *(undefined8 *)(lVar2 + 0x1334) = 0;
    *(undefined8 *)(lVar2 + 0x133c) = 0;
    *(undefined4 *)(lVar2 + 0x1344) = 0;
  }
  *(undefined4 *)(param_1 + 0x1be4) = 2;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0960);
      if (iVar1 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
      puVar3 = (uint *)&DAT_054f0958;
    }
    else {
      puVar3 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar3 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar3 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  *puVar3 = *puVar3 | 1;
  bVar4 = *(byte *)(param_1 + 0x1ee8);
  local_28 = 0x3dcccccd;
  local_24 = 0;
  local_2c = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  local_34 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  local_38 = (uint)bVar4;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_38,*(undefined4 *)(param_1 + 0x230),0);
  return;
}

