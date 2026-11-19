
void FUN_039d5610(long param_1,int param_2,undefined1 *param_3,undefined8 param_4,long *param_5)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x168) + (long)param_2 * 8);
  if (plVar2 != (long *)0x0) {
    *param_3 = 1;
    *(int *)(param_3 + 4) = (int)plVar2[2];
    param_3[8] = *(byte *)(plVar2 + 0x46) & 3;
    param_3[9] = *(byte *)(plVar2 + 0x46) >> 2 & 3;
    param_3[10] = *(byte *)(plVar2 + 0x46) >> 4 & 3;
    param_3[0xb] = *(byte *)(plVar2 + 0x46) >> 6;
    param_3[0xc] = *(byte *)((long)plVar2 + 0x231) & 3;
    param_3[0xd] = (byte)(*(uint *)(plVar2 + 0x46) >> 10) & 3;
    param_3[0xe] = (byte)(*(uint *)(plVar2 + 0x46) >> 0xc) & 3;
    param_3[0xf] = (byte)(*(uint *)(plVar2 + 0x46) >> 0xe) & 3;
    param_3[0x10] = *(byte *)((long)plVar2 + 0x234) & 3;
    param_3[0x11] = *(byte *)((long)plVar2 + 0x234) >> 2 & 3;
    param_3[0x12] = *(byte *)((long)plVar2 + 0x234) >> 4 & 3;
    param_3[0x13] = *(byte *)((long)plVar2 + 0x234) >> 6;
    param_3[0x14] = *(byte *)((long)plVar2 + 0x235) & 3;
    param_3[0x15] = (byte)(*(uint *)((long)plVar2 + 0x234) >> 10) & 3;
    param_3[0x16] = (byte)(*(uint *)((long)plVar2 + 0x234) >> 0xc) & 3;
    param_3[0x17] = (byte)(*(uint *)((long)plVar2 + 0x234) >> 0xe) & 3;
    (**(code **)(*plVar2 + 8))();
    *(undefined8 *)(*(long *)(param_1 + 0x168) + (long)param_2 * 8) = 0;
  }
  if (param_5 == (long *)0x0) {
    lVar4 = *(long *)PTR_DAT_04bb2698;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_5 = (long *)(lVar4 + 8);
    if (lVar3 != 0) {
      param_5 = (long *)(lVar3 + 0xa8);
    }
    param_5 = (long *)*param_5;
  }
  (**(code **)(*param_5 + 0x30))(param_5,param_4,0x20);
  bVar1 = (byte)(-1 << (ulong)(*(byte *)(param_1 + 0x2e2) & 0x1f));
  *(byte *)(param_1 + 0x2e1) = *(byte *)(param_1 + 0x2e1) & 0xf0 | bVar1 ^ 0xff;
  *(byte *)(*(long *)(param_1 + 0x170) + (long)param_2) = ~bVar1;
  return;
}

