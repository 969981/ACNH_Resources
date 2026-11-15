
void FUN_0226b080(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined4 local_44;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb4128;
  local_24 = *param_1;
  local_28[0] = 0;
  local_44 = 0;
  lVar6 = *(long *)PTR_DAT_04bb4128 + 0x2a4;
  uVar3 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 1;
  uVar4 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 2;
  uVar5 = FUN_0226baf0(&local_24,&local_44,lVar6,local_28);
  lVar6 = *(long *)puVar2;
  if (*(char *)(lVar6 + 0x388) < '\x01') {
    lVar8 = 0;
    puVar7 = (undefined1 *)(lVar6 + 0x388);
LAB_0226b1d0:
    *puVar7 = 0;
    puVar1 = (undefined4 *)(lVar6 + 0x37c + lVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    *(undefined1 *)((long)puVar1 + 0xd) = local_28[0];
    lVar6 = *(long *)puVar2;
  }
  else {
    if (*(char *)(lVar6 + 0x398) < '\x01') {
      puVar7 = (undefined1 *)(lVar6 + 0x398);
      lVar8 = 1;
      goto LAB_0226b1d0;
    }
    if (*(char *)(lVar6 + 0x3a8) < '\x01') {
      puVar7 = (undefined1 *)(lVar6 + 0x3a8);
      lVar8 = 2;
      goto LAB_0226b1d0;
    }
    if (*(char *)(lVar6 + 0x3b8) < '\x01') {
      puVar7 = (undefined1 *)(lVar6 + 0x3b8);
      lVar8 = 3;
      goto LAB_0226b1d0;
    }
    if (*(char *)(lVar6 + 0x3c8) < '\x01') {
      puVar7 = (undefined1 *)(lVar6 + 0x3c8);
      lVar8 = 4;
      goto LAB_0226b1d0;
    }
    if (*(char *)(lVar6 + 0x3d8) < '\x01') {
      puVar7 = (undefined1 *)(lVar6 + 0x3d8);
      lVar8 = 5;
      goto LAB_0226b1d0;
    }
    if (*(char *)(lVar6 + 1000) < '\x01') {
      puVar7 = (undefined1 *)(lVar6 + 1000);
      lVar8 = 6;
      goto LAB_0226b1d0;
    }
    if (*(char *)(lVar6 + 0x3f8) < '\x01') {
      puVar7 = (undefined1 *)(lVar6 + 0x3f8);
      lVar8 = 7;
      goto LAB_0226b1d0;
    }
  }
  lVar6 = lVar6 + 0x2b8;
  local_28[0] = 0;
  local_44 = 0;
  uVar3 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 1;
  uVar4 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 2;
  uVar5 = FUN_0226baf0(&local_24,&local_44,lVar6,local_28);
  lVar6 = *(long *)puVar2;
  lVar8 = 0;
  puVar7 = (undefined1 *)(lVar6 + 0x388);
  if ((*(char *)(lVar6 + 0x388) < '\0') || (*(char *)(lVar6 + 0x388) == '\x01')) {
LAB_0226b314:
    puVar1 = (undefined4 *)(lVar6 + 0x37c + lVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    *puVar7 = 1;
    *(undefined1 *)((long)puVar1 + 0xd) = local_28[0];
    lVar6 = *(long *)puVar2;
  }
  else {
    puVar7 = (undefined1 *)(lVar6 + 0x398);
    lVar8 = 1;
    if ((*(char *)(lVar6 + 0x398) < '\0') || (*(char *)(lVar6 + 0x398) == '\x01'))
    goto LAB_0226b314;
    puVar7 = (undefined1 *)(lVar6 + 0x3a8);
    lVar8 = 2;
    if ((*(char *)(lVar6 + 0x3a8) < '\0') || (*(char *)(lVar6 + 0x3a8) == '\x01'))
    goto LAB_0226b314;
    puVar7 = (undefined1 *)(lVar6 + 0x3b8);
    lVar8 = 3;
    if ((*(char *)(lVar6 + 0x3b8) < '\0') || (*(char *)(lVar6 + 0x3b8) == '\x01'))
    goto LAB_0226b314;
    puVar7 = (undefined1 *)(lVar6 + 0x3c8);
    lVar8 = 4;
    if ((*(char *)(lVar6 + 0x3c8) < '\0') || (*(char *)(lVar6 + 0x3c8) == '\x01'))
    goto LAB_0226b314;
    puVar7 = (undefined1 *)(lVar6 + 0x3d8);
    lVar8 = 5;
    if ((*(char *)(lVar6 + 0x3d8) < '\0') || (*(char *)(lVar6 + 0x3d8) == '\x01'))
    goto LAB_0226b314;
    puVar7 = (undefined1 *)(lVar6 + 1000);
    lVar8 = 6;
    if ((*(char *)(lVar6 + 1000) < '\0') || (*(char *)(lVar6 + 1000) == '\x01')) goto LAB_0226b314;
    puVar7 = (undefined1 *)(lVar6 + 0x3f8);
    lVar8 = 7;
    if ((*(char *)(lVar6 + 0x3f8) < '\0') || (*(char *)(lVar6 + 0x3f8) == '\x01'))
    goto LAB_0226b314;
  }
  lVar6 = lVar6 + 0x2cc;
  local_28[0] = 0;
  local_44 = 0;
  uVar3 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 1;
  uVar4 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 2;
  uVar5 = FUN_0226baf0(&local_24,&local_44,lVar6,local_28);
  lVar6 = *(long *)puVar2;
  lVar8 = 0;
  puVar7 = (undefined1 *)(lVar6 + 0x388);
  if ((*(char *)(lVar6 + 0x388) < '\0') || (*(char *)(lVar6 + 0x388) == '\x02')) {
LAB_0226b458:
    puVar1 = (undefined4 *)(lVar6 + 0x37c + lVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    *puVar7 = 2;
    *(undefined1 *)((long)puVar1 + 0xd) = local_28[0];
    lVar6 = *(long *)puVar2;
  }
  else {
    puVar7 = (undefined1 *)(lVar6 + 0x398);
    lVar8 = 1;
    if ((*(char *)(lVar6 + 0x398) < '\0') || (*(char *)(lVar6 + 0x398) == '\x02'))
    goto LAB_0226b458;
    puVar7 = (undefined1 *)(lVar6 + 0x3a8);
    lVar8 = 2;
    if ((*(char *)(lVar6 + 0x3a8) < '\0') || (*(char *)(lVar6 + 0x3a8) == '\x02'))
    goto LAB_0226b458;
    puVar7 = (undefined1 *)(lVar6 + 0x3b8);
    lVar8 = 3;
    if ((*(char *)(lVar6 + 0x3b8) < '\0') || (*(char *)(lVar6 + 0x3b8) == '\x02'))
    goto LAB_0226b458;
    puVar7 = (undefined1 *)(lVar6 + 0x3c8);
    lVar8 = 4;
    if ((*(char *)(lVar6 + 0x3c8) < '\0') || (*(char *)(lVar6 + 0x3c8) == '\x02'))
    goto LAB_0226b458;
    puVar7 = (undefined1 *)(lVar6 + 0x3d8);
    lVar8 = 5;
    if ((*(char *)(lVar6 + 0x3d8) < '\0') || (*(char *)(lVar6 + 0x3d8) == '\x02'))
    goto LAB_0226b458;
    puVar7 = (undefined1 *)(lVar6 + 1000);
    lVar8 = 6;
    if ((*(char *)(lVar6 + 1000) < '\0') || (*(char *)(lVar6 + 1000) == '\x02')) goto LAB_0226b458;
    puVar7 = (undefined1 *)(lVar6 + 0x3f8);
    lVar8 = 7;
    if ((*(char *)(lVar6 + 0x3f8) < '\0') || (*(char *)(lVar6 + 0x3f8) == '\x02'))
    goto LAB_0226b458;
  }
  lVar6 = lVar6 + 0x2e0;
  local_28[0] = 0;
  local_44 = 0;
  uVar3 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 1;
  uVar4 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 2;
  uVar5 = FUN_0226baf0(&local_24,&local_44,lVar6,local_28);
  lVar6 = *(long *)puVar2;
  lVar8 = 0;
  puVar7 = (undefined1 *)(lVar6 + 0x388);
  if ((*(char *)(lVar6 + 0x388) < '\0') || (*(char *)(lVar6 + 0x388) == '\x03')) {
LAB_0226b59c:
    puVar1 = (undefined4 *)(lVar6 + 0x37c + lVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    *puVar7 = 3;
    *(undefined1 *)((long)puVar1 + 0xd) = local_28[0];
    lVar6 = *(long *)puVar2;
  }
  else {
    puVar7 = (undefined1 *)(lVar6 + 0x398);
    lVar8 = 1;
    if ((*(char *)(lVar6 + 0x398) < '\0') || (*(char *)(lVar6 + 0x398) == '\x03'))
    goto LAB_0226b59c;
    puVar7 = (undefined1 *)(lVar6 + 0x3a8);
    lVar8 = 2;
    if ((*(char *)(lVar6 + 0x3a8) < '\0') || (*(char *)(lVar6 + 0x3a8) == '\x03'))
    goto LAB_0226b59c;
    puVar7 = (undefined1 *)(lVar6 + 0x3b8);
    lVar8 = 3;
    if ((*(char *)(lVar6 + 0x3b8) < '\0') || (*(char *)(lVar6 + 0x3b8) == '\x03'))
    goto LAB_0226b59c;
    puVar7 = (undefined1 *)(lVar6 + 0x3c8);
    lVar8 = 4;
    if ((*(char *)(lVar6 + 0x3c8) < '\0') || (*(char *)(lVar6 + 0x3c8) == '\x03'))
    goto LAB_0226b59c;
    puVar7 = (undefined1 *)(lVar6 + 0x3d8);
    lVar8 = 5;
    if ((*(char *)(lVar6 + 0x3d8) < '\0') || (*(char *)(lVar6 + 0x3d8) == '\x03'))
    goto LAB_0226b59c;
    puVar7 = (undefined1 *)(lVar6 + 1000);
    lVar8 = 6;
    if ((*(char *)(lVar6 + 1000) < '\0') || (*(char *)(lVar6 + 1000) == '\x03')) goto LAB_0226b59c;
    puVar7 = (undefined1 *)(lVar6 + 0x3f8);
    lVar8 = 7;
    if ((*(char *)(lVar6 + 0x3f8) < '\0') || (*(char *)(lVar6 + 0x3f8) == '\x03'))
    goto LAB_0226b59c;
  }
  lVar6 = lVar6 + 0x2f4;
  local_28[0] = 0;
  local_44 = 0;
  uVar3 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 1;
  uVar4 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 2;
  uVar5 = FUN_0226baf0(&local_24,&local_44,lVar6,local_28);
  lVar6 = *(long *)puVar2;
  lVar8 = 0;
  puVar7 = (undefined1 *)(lVar6 + 0x388);
  if ((*(char *)(lVar6 + 0x388) < '\0') || (*(char *)(lVar6 + 0x388) == '\x04')) {
LAB_0226b6e4:
    puVar1 = (undefined4 *)(lVar6 + 0x37c + lVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    *puVar7 = 4;
    *(undefined1 *)((long)puVar1 + 0xd) = local_28[0];
    lVar6 = *(long *)puVar2;
  }
  else {
    puVar7 = (undefined1 *)(lVar6 + 0x398);
    lVar8 = 1;
    if ((*(char *)(lVar6 + 0x398) < '\0') || (*(char *)(lVar6 + 0x398) == '\x04'))
    goto LAB_0226b6e4;
    puVar7 = (undefined1 *)(lVar6 + 0x3a8);
    lVar8 = 2;
    if ((*(char *)(lVar6 + 0x3a8) < '\0') || (*(char *)(lVar6 + 0x3a8) == '\x04'))
    goto LAB_0226b6e4;
    puVar7 = (undefined1 *)(lVar6 + 0x3b8);
    lVar8 = 3;
    if ((*(char *)(lVar6 + 0x3b8) < '\0') || (*(char *)(lVar6 + 0x3b8) == '\x04'))
    goto LAB_0226b6e4;
    puVar7 = (undefined1 *)(lVar6 + 0x3c8);
    lVar8 = 4;
    if ((*(char *)(lVar6 + 0x3c8) < '\0') || (*(char *)(lVar6 + 0x3c8) == '\x04'))
    goto LAB_0226b6e4;
    puVar7 = (undefined1 *)(lVar6 + 0x3d8);
    lVar8 = 5;
    if ((*(char *)(lVar6 + 0x3d8) < '\0') || (*(char *)(lVar6 + 0x3d8) == '\x04'))
    goto LAB_0226b6e4;
    puVar7 = (undefined1 *)(lVar6 + 1000);
    lVar8 = 6;
    if ((*(char *)(lVar6 + 1000) < '\0') || (*(char *)(lVar6 + 1000) == '\x04')) goto LAB_0226b6e4;
    puVar7 = (undefined1 *)(lVar6 + 0x3f8);
    lVar8 = 7;
    if ((*(char *)(lVar6 + 0x3f8) < '\0') || (*(char *)(lVar6 + 0x3f8) == '\x04'))
    goto LAB_0226b6e4;
  }
  lVar6 = lVar6 + 0x308;
  local_28[0] = 0;
  local_44 = 0;
  uVar3 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 1;
  uVar4 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 2;
  uVar5 = FUN_0226baf0(&local_24,&local_44,lVar6,local_28);
  lVar6 = *(long *)puVar2;
  lVar8 = 0;
  puVar7 = (undefined1 *)(lVar6 + 0x388);
  if ((*(char *)(lVar6 + 0x388) < '\0') || (*(char *)(lVar6 + 0x388) == '\x05')) {
LAB_0226b82c:
    puVar1 = (undefined4 *)(lVar6 + 0x37c + lVar8 * 0x10);
    *puVar7 = 5;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    *(undefined1 *)((long)puVar1 + 0xd) = local_28[0];
    lVar6 = *(long *)puVar2;
  }
  else {
    puVar7 = (undefined1 *)(lVar6 + 0x398);
    lVar8 = 1;
    if ((*(char *)(lVar6 + 0x398) < '\0') || (*(char *)(lVar6 + 0x398) == '\x05'))
    goto LAB_0226b82c;
    puVar7 = (undefined1 *)(lVar6 + 0x3a8);
    lVar8 = 2;
    if ((*(char *)(lVar6 + 0x3a8) < '\0') || (*(char *)(lVar6 + 0x3a8) == '\x05'))
    goto LAB_0226b82c;
    puVar7 = (undefined1 *)(lVar6 + 0x3b8);
    lVar8 = 3;
    if ((*(char *)(lVar6 + 0x3b8) < '\0') || (*(char *)(lVar6 + 0x3b8) == '\x05'))
    goto LAB_0226b82c;
    puVar7 = (undefined1 *)(lVar6 + 0x3c8);
    lVar8 = 4;
    if ((*(char *)(lVar6 + 0x3c8) < '\0') || (*(char *)(lVar6 + 0x3c8) == '\x05'))
    goto LAB_0226b82c;
    puVar7 = (undefined1 *)(lVar6 + 0x3d8);
    lVar8 = 5;
    if ((*(char *)(lVar6 + 0x3d8) < '\0') || (*(char *)(lVar6 + 0x3d8) == '\x05'))
    goto LAB_0226b82c;
    puVar7 = (undefined1 *)(lVar6 + 1000);
    lVar8 = 6;
    if ((*(char *)(lVar6 + 1000) < '\0') || (*(char *)(lVar6 + 1000) == '\x05')) goto LAB_0226b82c;
    puVar7 = (undefined1 *)(lVar6 + 0x3f8);
    lVar8 = 7;
    if ((*(char *)(lVar6 + 0x3f8) < '\0') || (*(char *)(lVar6 + 0x3f8) == '\x05'))
    goto LAB_0226b82c;
  }
  lVar6 = lVar6 + 0x31c;
  local_28[0] = 0;
  local_44 = 0;
  uVar3 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 1;
  uVar4 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 2;
  uVar5 = FUN_0226baf0(&local_24,&local_44,lVar6,local_28);
  lVar6 = *(long *)puVar2;
  lVar8 = 0;
  puVar7 = (undefined1 *)(lVar6 + 0x388);
  if ((-1 < *(char *)(lVar6 + 0x388)) && (*(char *)(lVar6 + 0x388) != '\x06')) {
    puVar7 = (undefined1 *)(lVar6 + 0x398);
    lVar8 = 1;
    if ((-1 < *(char *)(lVar6 + 0x398)) && (*(char *)(lVar6 + 0x398) != '\x06')) {
      puVar7 = (undefined1 *)(lVar6 + 0x3a8);
      lVar8 = 2;
      if ((-1 < *(char *)(lVar6 + 0x3a8)) && (*(char *)(lVar6 + 0x3a8) != '\x06')) {
        puVar7 = (undefined1 *)(lVar6 + 0x3b8);
        lVar8 = 3;
        if ((-1 < *(char *)(lVar6 + 0x3b8)) && (*(char *)(lVar6 + 0x3b8) != '\x06')) {
          puVar7 = (undefined1 *)(lVar6 + 0x3c8);
          lVar8 = 4;
          if ((-1 < *(char *)(lVar6 + 0x3c8)) && (*(char *)(lVar6 + 0x3c8) != '\x06')) {
            puVar7 = (undefined1 *)(lVar6 + 0x3d8);
            lVar8 = 5;
            if ((-1 < *(char *)(lVar6 + 0x3d8)) && (*(char *)(lVar6 + 0x3d8) != '\x06')) {
              puVar7 = (undefined1 *)(lVar6 + 1000);
              lVar8 = 6;
              if ((-1 < *(char *)(lVar6 + 1000)) && (*(char *)(lVar6 + 1000) != '\x06')) {
                puVar7 = (undefined1 *)(lVar6 + 0x3f8);
                lVar8 = 7;
                if ((-1 < *(char *)(lVar6 + 0x3f8)) && (*(char *)(lVar6 + 0x3f8) != '\x06'))
                goto LAB_0226b994;
              }
            }
          }
        }
      }
    }
  }
  puVar1 = (undefined4 *)(lVar6 + 0x37c + lVar8 * 0x10);
  *puVar7 = 6;
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  *(undefined1 *)((long)puVar1 + 0xd) = local_28[0];
  lVar6 = *(long *)puVar2;
LAB_0226b994:
  lVar6 = lVar6 + 0x330;
  local_28[0] = 0;
  local_44 = 0;
  uVar3 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 1;
  uVar4 = FUN_0226baf0(&local_24,&local_44,lVar6,0);
  local_44 = 2;
  uVar5 = FUN_0226baf0(&local_24,&local_44,lVar6,local_28);
  lVar6 = *(long *)puVar2;
  lVar8 = 0;
  puVar7 = (undefined1 *)(lVar6 + 0x388);
  if ((-1 < *(char *)(lVar6 + 0x388)) && (*(char *)(lVar6 + 0x388) != '\a')) {
    puVar7 = (undefined1 *)(lVar6 + 0x398);
    lVar8 = 1;
    if ((-1 < *(char *)(lVar6 + 0x398)) && (*(char *)(lVar6 + 0x398) != '\a')) {
      puVar7 = (undefined1 *)(lVar6 + 0x3a8);
      lVar8 = 2;
      if ((-1 < *(char *)(lVar6 + 0x3a8)) && (*(char *)(lVar6 + 0x3a8) != '\a')) {
        puVar7 = (undefined1 *)(lVar6 + 0x3b8);
        lVar8 = 3;
        if ((-1 < *(char *)(lVar6 + 0x3b8)) && (*(char *)(lVar6 + 0x3b8) != '\a')) {
          puVar7 = (undefined1 *)(lVar6 + 0x3c8);
          lVar8 = 4;
          if ((-1 < *(char *)(lVar6 + 0x3c8)) && (*(char *)(lVar6 + 0x3c8) != '\a')) {
            puVar7 = (undefined1 *)(lVar6 + 0x3d8);
            lVar8 = 5;
            if ((-1 < *(char *)(lVar6 + 0x3d8)) && (*(char *)(lVar6 + 0x3d8) != '\a')) {
              puVar7 = (undefined1 *)(lVar6 + 1000);
              lVar8 = 6;
              if ((-1 < *(char *)(lVar6 + 1000)) && (*(char *)(lVar6 + 1000) != '\a')) {
                puVar7 = (undefined1 *)(lVar6 + 0x3f8);
                lVar8 = 7;
                if ((-1 < *(char *)(lVar6 + 0x3f8)) && (*(char *)(lVar6 + 0x3f8) != '\a')) {
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  puVar1 = (undefined4 *)(lVar6 + 0x37c + lVar8 * 0x10);
  *puVar7 = 7;
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  *(undefined1 *)((long)puVar1 + 0xd) = local_28[0];
  return;
}

