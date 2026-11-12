
/* WARNING: Removing unreachable block (ram,0x00991d44) */

undefined8 * FUN_00991c4c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  if (DAT_04cfe818 != (undefined8 *)0x0) {
    return DAT_04cfe818;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar3 = malloc(0xf8);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_00991cd8;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xf8,8);
  }
LAB_00991cd8:
  FUN_038c69f0(puVar3 + 0x1b,param_1,3);
  *(undefined1 *)(puVar3 + 1) = 0;
  puVar3[0x1b] = &PTR_FUN_0492b468;
  puVar3[2] = 0;
  DAT_04cfe810 = puVar3 + 0x1b;
  *puVar3 = &PTR_LAB_0492b488;
  if ((((DAT_05231900 != 0) && (*(long *)(DAT_05231900 + 0x50) != 0)) &&
      (plVar2 = *(long **)(*(long *)(DAT_05231900 + 0x50) + 0x118), plVar2 != (long *)0x0)) &&
     (((char)plVar2[7] != '\0' && (uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2), (uVar4 & 1) != 0))
     )) {
    puVar3[2] = plVar2;
  }
  *(undefined2 *)(puVar3 + 3) = 0;
  *(undefined8 *)((long)puVar3 + 0x24) = 0;
  *(undefined1 **)((long)puVar3 + 0x1c) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)puVar3 + 0x2c) = 0;
  *(undefined8 *)((long)puVar3 + 0x34) = 0;
  *(undefined8 *)((long)puVar3 + 0x3c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x54) = 0;
  *(undefined8 *)((long)puVar3 + 0x5c) = 0;
  *(undefined8 *)((long)puVar3 + 100) = 0;
  *(undefined8 *)((long)puVar3 + 0x6c) = 0;
  *(undefined8 *)((long)puVar3 + 0x74) = 0;
  *(undefined8 *)((long)puVar3 + 0x7c) = 0;
  *(undefined8 *)((long)puVar3 + 0x84) = 0;
  *(undefined8 *)((long)puVar3 + 0x8c) = 0;
  *(undefined8 *)((long)puVar3 + 0x94) = 0;
  *(undefined8 *)((long)puVar3 + 0x9c) = 0;
  *(undefined8 *)((long)puVar3 + 0xa4) = 0;
  *(undefined8 *)((long)puVar3 + 0xac) = 0;
  *(undefined8 *)((long)puVar3 + 0xb4) = 0;
  *(undefined8 *)((long)puVar3 + 0xbc) = 0;
  *(undefined8 *)((long)puVar3 + 0xc4) = 0;
  *(undefined8 *)((long)puVar3 + 0xcc) = 0;
  *(undefined4 *)((long)puVar3 + 0xd4) = 0;
  DAT_04cfe818 = puVar3;
  return puVar3;
}

