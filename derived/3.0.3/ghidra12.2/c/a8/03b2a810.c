
void FUN_03b2a810(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  param_1[8] = 0x2201f;
  param_1[9] = 0;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  param_1[0xc] = 0;
  plVar4 = param_1 + 0xd;
  *plVar4 = 0;
  param_1[0xe] = 0;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_LAB_04b74af8;
  param_1[1] = param_1 + 1;
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  *(undefined2 *)(param_1 + 0x11) = 4;
  *(undefined1 *)((long)param_1 + 0x8a) = *(undefined1 *)(param_2 + 0x8a);
  uVar1 = *(undefined1 *)(param_2 + 0x8b);
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)((long)param_1 + 0x8b) = uVar1;
  FUN_03b227e0();
  cVar2 = *(char *)(param_2 + 0x88);
  *(char *)(param_1 + 0x11) = cVar2;
  *(uint *)(param_1 + 8) =
       (uint)(cVar2 == '\x02') << 5 | (uint)(cVar2 == '\x03') << 10 |
       *(uint *)(param_1 + 8) & 0xfffffbdf;
  if (*(long *)(param_2 + 0x68) != 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x68) + 0x60);
    lVar3 = FUN_03b185ec(param_3,lVar3 + (ulong)*(uint *)(lVar3 + 0xc),1);
    *plVar4 = lVar3;
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x57) = *(byte *)(lVar3 + 0x57) | 0x10;
      *(byte *)(*plVar4 + 0x57) = *(byte *)(*plVar4 + 0x57) & 0xdf;
    }
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x70) + 0x60);
    lVar3 = FUN_03b185ec(param_3,lVar3 + (ulong)*(uint *)(lVar3 + 0xc),1);
    param_1[0xe] = lVar3;
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x57) = *(byte *)(lVar3 + 0x57) | 0x10;
      *(byte *)(param_1[0xe] + 0x57) = *(byte *)(param_1[0xe] + 0x57) & 0xdf;
    }
  }
  return;
}

