
bool FUN_01c84c50(undefined8 *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 local_78;
  ulong uStack_70;
  undefined1 local_64 [4];
  
  *param_2 = 0;
  puVar3 = PTR_DAT_04bcb7d8;
  bVar7 = false;
  uVar6 = 0;
  do {
    uVar2 = 1 << (ulong)(uVar6 & 0x1f);
    if ((*(uint *)*param_1 & uVar2) != 0) {
      uVar1 = uVar6 & 0xff;
      local_64[0] = (undefined1)uVar6;
      uVar4 = FUN_01c94e4c(*(undefined8 *)param_1[1],local_64);
      if ((uVar4 & 1) != 0) {
        puVar8 = &DAT_053565d0;
        if (uVar1 != 0xff) {
          lVar5 = *(long *)param_1[1];
          if (*(byte *)(lVar5 + 0x28) == uVar1 && *(char *)(lVar5 + 0x20) == '\0') {
            puVar8 = (undefined8 *)(lVar5 + 0x18);
          }
          else if (*(byte *)(lVar5 + 0x48) == uVar1 && *(char *)(lVar5 + 0x40) == '\0') {
            puVar8 = (undefined8 *)(lVar5 + 0x38);
          }
          else if ((*(byte *)(lVar5 + 0x68) == uVar1) && (*(char *)(lVar5 + 0x60) == '\0')) {
            puVar8 = (undefined8 *)(lVar5 + 0x58);
          }
          else if ((*(byte *)(lVar5 + 0x88) == uVar1) && (*(char *)(lVar5 + 0x80) == '\0')) {
            puVar8 = (undefined8 *)(lVar5 + 0x78);
          }
          else if ((*(byte *)(lVar5 + 0xa8) == uVar1) && (*(char *)(lVar5 + 0xa0) == '\0')) {
            puVar8 = (undefined8 *)(lVar5 + 0x98);
          }
          else if ((*(byte *)(lVar5 + 200) == uVar1) && (*(char *)(lVar5 + 0xc0) == '\0')) {
            puVar8 = (undefined8 *)(lVar5 + 0xb8);
          }
          else if ((*(byte *)(lVar5 + 0xe8) == uVar1) && (*(char *)(lVar5 + 0xe0) == '\0')) {
            puVar8 = (undefined8 *)(lVar5 + 0xd8);
          }
          else {
            puVar8 = (undefined8 *)(lVar5 + 0xf8);
            if (*(char *)(lVar5 + 0x100) != '\0' || *(byte *)(lVar5 + 0x108) != uVar1) {
              puVar8 = &DAT_053565d0;
            }
          }
        }
        uStack_70 = (ulong)*(byte *)(puVar8 + 1);
        local_78 = *puVar8;
        uVar4 = (**(code **)(**(long **)(*(long *)puVar3 + 0x68) + 0x100))
                          (*(long **)(*(long *)puVar3 + 0x68),&local_78);
        if ((uVar4 & 1) != 0) {
          uVar4 = FUN_002b73bc(*(undefined8 *)param_1[2],*puVar8,
                               *(undefined1 *)(*(long *)param_1[3] + 10));
          if ((uVar4 & 1) == 0) {
            uStack_70 = (ulong)*(byte *)(puVar8 + 1);
            local_78 = *puVar8;
            lVar5 = (**(code **)(**(long **)param_1[4] + 0x120))(*(long **)param_1[4],&local_78);
            if ((uint)*(byte *)(lVar5 + 9) != (int)*(char *)param_1[5]) {
              return bVar7;
            }
            if (*(char *)(lVar5 + 8) != '\x03') {
              return bVar7;
            }
            **(uint **)param_1[3] = **(uint **)param_1[3] ^ uVar2;
            (**(code **)(**(long **)param_1[4] + 0x38))(*(long **)param_1[4],1);
          }
          else {
            *param_2 = 1;
          }
        }
      }
    }
    uVar2 = uVar6 + 1;
    bVar7 = 6 < uVar6;
    uVar6 = uVar2;
    if (uVar2 == 8) {
      return bVar7;
    }
  } while( true );
}

