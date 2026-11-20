
void FUN_03eb84a8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  FUN_03eb82fc(param_1,3);
  if (DAT_05aed670 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(DAT_05aed670 + 0x330);
  }
  (**(code **)(*(long *)(lVar4 + 0x118) + 0x18))(lVar4 + 0x118);
  FUN_038d13f0(param_1,"Meta:\t%s\n",*(undefined8 *)(lVar4 + 0x120));
  FUN_038d1270(&DAT_05b03f60,"----[ Heap Status ]----\n");
  plVar3 = *(long **)(*(long *)(DAT_05aed670 + 0x330) + 0xd0);
  lVar4 = (**(code **)(*plVar3 + 0x70))(plVar3);
  lVar1 = (**(code **)(*plVar3 + 0x78))(plVar3);
  uVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
  FUN_038d13f0((double)((float)(ulong)(lVar4 - lVar1) * 0.0009765625 * 0.0009765625),
               (double)((float)uVar2 * 0.0009765625 * 0.0009765625),&DAT_05b03f60,
               "SceneHeap:\t%5.1f / %5.1f [use(MB) / all(MB)]\n");
  FUN_03eb85c0(plVar3,&DAT_05b03f60);
  return;
}

