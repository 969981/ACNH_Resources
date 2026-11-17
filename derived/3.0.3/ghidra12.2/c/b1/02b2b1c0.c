
void FUN_02b2b1c0(undefined8 *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined **local_68;
  uint local_60;
  long local_58;
  
  puVar1 = PTR_DAT_04bb5008;
  uVar4 = 0;
  do {
    local_68 = &PTR_LAB_04aa1c38;
    if (uVar4 != 0) {
      lVar3 = *(long *)puVar1;
      if ((int)*(uint *)(lVar3 + 0x1e0) < 1) {
        if ((((*(long *)(lVar3 + 0xd0) != 0) &&
             (puVar2 = *(uint **)(*(long *)(lVar3 + 0xd0) + 8), puVar2 != (uint *)0x0)) &&
            ((*(uint *)(lVar3 + 0xe8) <= uVar4 ||
             (*(char *)(*(long *)(lVar3 + 0xf0) + (long)(int)uVar4) != '\0')))) &&
           (((uVar4 < *puVar2 && (puVar2[1] != 0)) && ((ushort)puVar2[2] != 0)))) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar2 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          local_58 = (ulong)(puVar2[1] * uVar4 + (uint)(ushort)puVar2[2] * 8 + iVar6) + (long)puVar2
          ;
          goto joined_r0x02b2b2e4;
        }
      }
      else if (uVar4 < *(uint *)(lVar3 + 0x1e0)) {
        uVar5 = uVar4;
        if (*(uint *)(lVar3 + 0x1d0) <= uVar4) {
          uVar5 = 0;
        }
        local_58 = *(long *)(*(long *)(lVar3 + 0x1d8) + (ulong)uVar5 * 8);
joined_r0x02b2b2e4:
        if (local_58 != 0) {
          local_60 = uVar4;
          (**(code **)*param_1)(param_1,&local_68);
        }
      }
    }
    uVar5 = 0x27;
    if ((int)uVar4 < 0x27) {
      uVar5 = uVar4 + 1;
    }
    uVar4 = uVar5;
    if (uVar5 == 0x27) {
      return;
    }
  } while( true );
}

