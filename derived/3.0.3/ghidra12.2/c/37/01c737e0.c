
uint FUN_01c737e0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  uint local_40;
  undefined1 auStack_31 [17];
  
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 == 0) {
    uVar3 = 1;
  }
  else {
    if (((((*(char *)(lVar5 + 0x1b8) == '\0') ||
          (*(char *)(lVar5 + 0x50) == '\0' || *(char *)(lVar5 + 0x5c) != '\0')) &&
         ((*(char *)(lVar5 + 0x370) == '\0' ||
          ((*(char *)(lVar5 + 0x208) == '\0' || (*(char *)(lVar5 + 0x214) != '\0')))))) &&
        ((*(char *)(lVar5 + 0x528) == '\0' ||
         ((*(char *)(lVar5 + 0x3c0) == '\0' || (*(char *)(lVar5 + 0x3cc) != '\0')))))) &&
       ((*(char *)(lVar5 + 0x608) == '\0' || ((*(byte *)(lVar5 + 0x604) & 1) != 0)))) {
      if (*(long *)(lVar5 + 0x570) != 0) {
        (**(code **)(*(long *)**(undefined8 **)(lVar5 + 0x568) + 0x38))();
      }
      *(undefined8 *)(lVar5 + 0x570) = 0;
      *(undefined4 *)(lVar5 + 0x578) = 0;
      puVar2 = PTR_DAT_04bb8470;
      *(undefined1 *)(*(long *)PTR_DAT_04bc1000 + 0x7c8) = 1;
      lVar5 = **(long **)puVar2;
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 9) = 0;
        *(undefined1 *)(lVar5 + 0x171) = 0;
        *(undefined1 *)(lVar5 + 0x2d9) = 0;
        *(undefined1 *)(lVar5 + 0x441) = 0;
      }
      uVar4 = FUN_01df3270(param_1 + 0x1a0);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x50);
        if (((((*(char *)(lVar5 + 0x1b8) == '\0') || (*(char *)(lVar5 + 0x50) == '\0')) ||
             (*(char *)(lVar5 + 0x5c) != '\0')) &&
            (((*(char *)(lVar5 + 0x370) == '\0' || (*(char *)(lVar5 + 0x208) == '\0')) ||
             (*(char *)(lVar5 + 0x214) != '\0')))) &&
           ((((*(char *)(lVar5 + 0x528) == '\0' || (*(char *)(lVar5 + 0x3c0) == '\0')) ||
             (*(char *)(lVar5 + 0x3cc) != '\0')) &&
            ((*(char *)(lVar5 + 0x608) == '\0' || ((*(byte *)(lVar5 + 0x604) & 1) != 0)))))) {
          local_58 = 0;
          local_68 = 0;
          uStack_60 = 0;
          puVar1 = (undefined8 *)(lVar5 + 8);
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          uVar6 = *(undefined8 *)PTR_DAT_04bc1000;
          local_40 = 1;
          if (((*(char *)(lVar5 + 0x1b8) != '\0') && (*(char *)(lVar5 + 0x50) != '\0')) &&
             (*(uint *)(lVar5 + 0x48) != 0xffffffff)) {
            (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(lVar5 + 0x48)])(auStack_31,puVar1);
          }
          *(undefined1 *)(lVar5 + 0x50) = 0;
          *(undefined8 *)(lVar5 + 0x40) = 0;
          *(undefined8 *)(lVar5 + 0x48) = 0;
          *puVar1 = 0;
          *(undefined4 *)(lVar5 + 0x58) = 0;
          *(undefined1 *)(lVar5 + 0x5c) = 0;
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined8 *)(lVar5 + 0x38) = 0;
          *(undefined8 *)(lVar5 + 0x20) = 0;
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          memset((void *)(lVar5 + 0x60),0,0x131);
          *(undefined4 *)(lVar5 + 0x198) = 0;
          *(undefined1 *)(lVar5 + 0x19c) = 0;
          *(undefined4 *)(lVar5 + 0x1a0) = 0;
          *(undefined1 *)(lVar5 + 0x1a4) = 0;
          *(undefined1 *)(lVar5 + 0x1b8) = 1;
          *(undefined8 *)(lVar5 + 0x1a8) = 0;
          *(undefined8 *)(lVar5 + 0x1b0) = 0;
          uVar3 = FUN_01c7cf1c(uVar6,puVar1,&local_80);
          if (local_40 != 0xffffffff) {
            (*(code *)(&PTR_FUN_04a434e0)[local_40])(auStack_31,&local_80);
          }
        }
        else {
          uVar3 = 0;
        }
        return uVar3 & 1;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

