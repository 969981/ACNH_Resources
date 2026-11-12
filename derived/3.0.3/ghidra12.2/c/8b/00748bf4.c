
undefined8 FUN_00748bf4(long *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  short *local_40;
  uint *local_38;
  
  FUN_03ea9348(&local_40,param_2,param_3);
  if ((local_40 != (short *)0x0) &&
     (puVar4 = (uint *)(**(code **)(*param_1 + 0xf0))(param_1), local_38 != (uint *)0x0)) {
    if ((char)*local_38 == -0x3f) {
      uVar6 = *local_38 >> 8;
      sVar3 = *local_40;
      if (sVar3 == 0x5942) {
        uVar6 = uVar6 & 0xff00 | *local_38 >> 0x18 | (uVar6 & 0xff) << 0x10;
      }
      if (uVar6 == 0) {
        return 0;
      }
      cVar2 = *(char *)((long)local_38 + 7);
      uVar6 = local_38[2];
    }
    else {
      if ((char)*local_38 != -0x40) {
        return 0;
      }
      sVar3 = *local_40;
      uVar1 = *local_38;
      uVar6 = uVar1 >> 8;
      if (sVar3 == 0x5942) {
        uVar6 = uVar6 & 0xff00 | uVar1 >> 0x18 | (uVar6 & 0xff) << 0x10;
        if (uVar6 == 0) {
          return 0;
        }
      }
      else if (uVar1 < 0x100) {
        return 0;
      }
      cVar2 = (char)local_38[1];
      uVar6 = *(uint *)((long)local_38 + (ulong)(uVar6 + 3 & 0x1fffffc) + 4);
    }
    uVar1 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    if (sVar3 != 0x5942) {
      uVar1 = uVar6;
    }
    if (cVar2 == -0x2e) {
      *puVar4 = uVar1;
      lVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
      if ((char)*local_38 == -0x3f) {
        sVar3 = *local_40;
        uVar6 = *local_38 >> 8;
        if (sVar3 == 0x5942) {
          uVar6 = uVar6 & 0xff00 | *local_38 >> 0x18 | (uVar6 & 0xff) << 0x10;
        }
        if (uVar6 == 0) {
          return 0;
        }
        cVar2 = *(char *)((long)local_38 + 0xf);
        uVar6 = local_38[4];
      }
      else {
        if ((char)*local_38 != -0x40) {
          return 0;
        }
        sVar3 = *local_40;
        uVar1 = *local_38;
        uVar6 = uVar1 >> 8;
        if (sVar3 == 0x5942) {
          uVar6 = uVar6 & 0xff00 | uVar1 >> 0x18 | (uVar6 & 0xff) << 0x10;
          if (uVar6 < 2) {
            return 0;
          }
        }
        else if (uVar1 < 0x200) {
          return 0;
        }
        cVar2 = *(char *)((long)local_38 + 5);
        uVar6 = *(uint *)((long)local_38 + (ulong)((uVar6 + 3 & 0x1fffffc) + 4) + 4);
      }
      uVar1 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      if (sVar3 != 0x5942) {
        uVar1 = uVar6;
      }
      if (cVar2 == -0x2e) {
        *(uint *)(lVar5 + 4) = uVar1;
        lVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
        if ((char)*local_38 == -0x3f) {
          sVar3 = *local_40;
          uVar6 = *local_38 >> 8;
          if (sVar3 == 0x5942) {
            uVar6 = uVar6 & 0xff00 | *local_38 >> 0x18 | (uVar6 & 0xff) << 0x10;
          }
          if (uVar6 == 0) {
            return 0;
          }
          cVar2 = *(char *)((long)local_38 + 0x17);
          uVar6 = local_38[6];
        }
        else {
          if ((char)*local_38 != -0x40) {
            return 0;
          }
          sVar3 = *local_40;
          uVar1 = *local_38;
          uVar6 = uVar1 >> 8;
          if (sVar3 == 0x5942) {
            uVar6 = uVar6 & 0xff00 | uVar1 >> 0x18 | (uVar6 & 0xff) << 0x10;
            if (uVar6 < 3) {
              return 0;
            }
          }
          else if (uVar1 < 0x300) {
            return 0;
          }
          cVar2 = *(char *)((long)local_38 + 6);
          uVar6 = *(uint *)((long)local_38 + (ulong)((uVar6 + 3 & 0x1fffffc) + 4) + 8);
        }
        uVar1 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        if (sVar3 != 0x5942) {
          uVar1 = uVar6;
        }
        if (cVar2 == -0x2e) {
          *(uint *)(lVar5 + 8) = uVar1;
          lVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
          if ((char)*local_38 == -0x3f) {
            sVar3 = *local_40;
            uVar6 = *local_38 >> 8;
            if (sVar3 == 0x5942) {
              uVar6 = uVar6 & 0xff00 | *local_38 >> 0x18 | (uVar6 & 0xff) << 0x10;
            }
            if (uVar6 == 0) {
              return 0;
            }
            cVar2 = *(char *)((long)local_38 + 0x1f);
            uVar6 = local_38[8];
          }
          else {
            if ((char)*local_38 != -0x40) {
              return 0;
            }
            sVar3 = *local_40;
            uVar1 = *local_38;
            uVar6 = uVar1 >> 8;
            if (sVar3 == 0x5942) {
              uVar6 = uVar6 & 0xff00 | uVar1 >> 0x18 | (uVar6 & 0xff) << 0x10;
              if (uVar6 < 4) {
                return 0;
              }
            }
            else if (uVar1 < 0x400) {
              return 0;
            }
            cVar2 = *(char *)((long)local_38 + 7);
            uVar6 = *(uint *)((long)local_38 + (ulong)((uVar6 + 3 & 0x1fffffc) + 4) + 0xc);
          }
          uVar1 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
          if (sVar3 != 0x5942) {
            uVar1 = uVar6;
          }
          if (cVar2 == -0x2e) {
            *(uint *)(lVar5 + 0xc) = uVar1;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

