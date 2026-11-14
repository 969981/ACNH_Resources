
undefined8 FUN_01d72f98(long param_1,void *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  plVar5 = DAT_0537d558;
  if (*(uint *)(DAT_0537d558 + 0x10) < 2) {
    uVar6 = 1;
  }
  else if ((*(char *)(*(long *)(param_1 + 0x38) + 0x41) == '\0') &&
          (*(char *)(*(long *)(param_1 + 0x38) + 0x40) == '\0')) {
    *(undefined1 *)(param_1 + 0x18) = 0xff;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    lVar8 = *plVar5;
    bVar4 = *(byte *)(lVar8 + 0x473);
    puVar7 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        puVar7 = (undefined1 *)(lVar8 + 0x473);
      }
    }
    local_38 = 0;
    local_32 = 0;
    local_34 = 0xff00;
    *(undefined1 *)(param_1 + 0x18) = *puVar7;
    iVar3 = *(int *)(*(long *)(param_1 + 0x20) + 8);
    if (-1 < iVar3) {
      FUN_01db1df0(*plVar5 + 0x480,iVar3,&local_38,(undefined1 *)(param_1 + 0x18),8,0);
    }
    memcpy(*(void **)(param_1 + 0x30),param_2,0x77d0);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lVar8 = *(long *)(param_1 + 0x38);
    uVar6 = 1;
    *(undefined4 *)(lVar8 + 8) = 0;
    *(undefined2 *)(lVar8 + 0xc) = 0xff00;
    *(undefined1 *)(lVar8 + 0xe) = 0;
    *(undefined8 *)(lVar8 + 0x10) = uVar2;
    *(undefined8 *)(lVar8 + 0x18) = 0x77d0;
    *(undefined4 *)(lVar8 + 0x34) = 0;
    *(undefined1 *)(lVar8 + 0x40) = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

