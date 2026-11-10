
undefined8 FUN_0031d3ac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  
  uVar1 = FUN_0031ed2c(param_1 + 0x880);
  uVar2 = FUN_0031ed2c(param_1 + 0x8c8);
  uVar3 = FUN_0031ed2c(param_1 + 0x910);
  uVar4 = FUN_0031ed2c(param_1 + 0x958);
  lVar6 = *(long *)(param_1 + 0x240);
  lVar7 = *(long *)(lVar6 + 0x350);
  if (lVar7 == 0) {
    uVar5 = 1;
    lVar7 = *(long *)(lVar6 + 0x358);
  }
  else {
    cVar8 = *(char *)(lVar7 + 0x86);
    if (*(char *)(lVar7 + 0x49) == -1) {
      if (cVar8 == -1 || (uVar1 & 1) != 0) goto LAB_0031d45c;
LAB_0031d498:
      FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                   ,0,0);
      uVar5 = 0;
      cVar8 = *(char *)(lVar7 + 0x87);
      if (*(char *)(lVar7 + 0x4a) == -1) goto LAB_0031d4c0;
LAB_0031d470:
      if ((uVar2 & 1) == 0) {
        FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                     ,1,0);
        uVar5 = 0;
        if (cVar8 != -1) {
LAB_0031d4d0:
          FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                       ,1,0);
          uVar5 = 0;
        }
      }
    }
    else {
      if ((uVar1 & 1) == 0) {
        FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                     ,0,0);
        uVar5 = 0;
        if (cVar8 != -1) goto LAB_0031d498;
      }
      else {
LAB_0031d45c:
        uVar5 = 1;
      }
      cVar8 = *(char *)(lVar7 + 0x87);
      if (*(char *)(lVar7 + 0x4a) != -1) goto LAB_0031d470;
LAB_0031d4c0:
      if (cVar8 != -1 && (uVar2 & 1) == 0) goto LAB_0031d4d0;
    }
    cVar8 = *(char *)(lVar7 + 0x88);
    if (*(char *)(lVar7 + 0x4b) == -1) {
      if (cVar8 != -1 && (uVar3 & 1) == 0) {
LAB_0031d530:
        FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                     ,2,0);
        uVar5 = 0;
      }
    }
    else if ((uVar3 & 1) == 0) {
      FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                   ,2,0);
      uVar5 = 0;
      if (cVar8 != -1) goto LAB_0031d530;
    }
    cVar8 = *(char *)(lVar7 + 0x89);
    if (*(char *)(lVar7 + 0x4c) == -1) {
      if (cVar8 != -1 && (uVar4 & 1) == 0) {
LAB_0031d590:
        FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                     ,3,0);
        uVar5 = 0;
      }
    }
    else if ((uVar4 & 1) == 0) {
      FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                   ,3,0);
      uVar5 = 0;
      if (cVar8 != -1) goto LAB_0031d590;
    }
    lVar6 = *(long *)(param_1 + 0x240);
    lVar7 = *(long *)(lVar6 + 0x358);
  }
  if (lVar7 != 0) {
    cVar8 = *(char *)(lVar7 + 0x86);
    if (*(char *)(lVar7 + 0x49) == -1) {
      if (cVar8 != -1 && (uVar1 & 1) == 0) {
LAB_0031d5fc:
        FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                     ,0,1);
        uVar5 = 0;
      }
    }
    else if ((uVar1 & 1) == 0) {
      FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                   ,0,1);
      uVar5 = 0;
      if (cVar8 != -1) goto LAB_0031d5fc;
    }
    cVar8 = *(char *)(lVar7 + 0x87);
    if (*(char *)(lVar7 + 0x4a) == -1) {
      if (cVar8 != -1 && (uVar2 & 1) == 0) {
LAB_0031d658:
        FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                     ,1,1);
        goto LAB_0031d66c;
      }
    }
    else if ((uVar2 & 1) == 0) {
      FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                   ,1,1);
      if (cVar8 != -1) goto LAB_0031d658;
LAB_0031d66c:
      uVar5 = 0;
    }
    cVar8 = *(char *)(lVar7 + 0x88);
    if (*(char *)(lVar7 + 0x4b) == -1) {
      if (cVar8 != -1 && (uVar3 & 1) == 0) {
LAB_0031d6b4:
        FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                     ,2,1);
        goto LAB_0031d6c8;
      }
    }
    else if ((uVar3 & 1) == 0) {
      FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                   ,2,1);
      if (cVar8 != -1) goto LAB_0031d6b4;
LAB_0031d6c8:
      uVar5 = 0;
    }
    cVar8 = *(char *)(lVar7 + 0x89);
    if (*(char *)(lVar7 + 0x4c) == -1) {
      if (cVar8 != -1 && (uVar4 & 1) == 0) {
LAB_0031d710:
        FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                     ,3,1);
        goto LAB_0031d724;
      }
    }
    else if ((uVar4 & 1) == 0) {
      FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                   ,3,1);
      if (cVar8 != -1) goto LAB_0031d710;
LAB_0031d724:
      uVar5 = 0;
    }
    lVar6 = *(long *)(param_1 + 0x240);
  }
  lVar7 = *(long *)(lVar6 + 0x360);
  if (lVar7 != 0) {
    cVar8 = *(char *)(lVar7 + 0x86);
    if (*(char *)(lVar7 + 0x49) == -1) {
      if (cVar8 != -1 && (uVar1 & 1) == 0) {
LAB_0031d77c:
        FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                     ,0,2);
        uVar5 = 0;
      }
    }
    else if ((uVar1 & 1) == 0) {
      FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                   ,0,2);
      uVar5 = 0;
      if (cVar8 != -1) goto LAB_0031d77c;
    }
    cVar8 = *(char *)(lVar7 + 0x87);
    if (*(char *)(lVar7 + 0x4a) == -1) {
      if (cVar8 != -1 && (uVar2 & 1) == 0) {
LAB_0031d7d8:
        FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                     ,1,2);
        goto LAB_0031d7ec;
      }
    }
    else if ((uVar2 & 1) == 0) {
      FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                   ,1,2);
      if (cVar8 != -1) goto LAB_0031d7d8;
LAB_0031d7ec:
      uVar5 = 0;
    }
    cVar8 = *(char *)(lVar7 + 0x88);
    if (*(char *)(lVar7 + 0x4b) == -1) {
      if (cVar8 != -1 && (uVar3 & 1) == 0) {
LAB_0031d834:
        FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                     ,2,2);
        goto LAB_0031d848;
      }
    }
    else if ((uVar3 & 1) == 0) {
      FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                   ,2,2);
      if (cVar8 != -1) goto LAB_0031d834;
LAB_0031d848:
      uVar5 = 0;
    }
    cVar8 = *(char *)(lVar7 + 0x89);
    if (*(char *)(lVar7 + 0x4c) == -1) {
      if (cVar8 != -1 && (uVar4 & 1) == 0) {
LAB_0031d890:
        FUN_0032c410("Custom attribute %d is used in the pixel shader %d, but the memory pool is not initialized.\n"
                     ,3,2);
        goto LAB_0031d8a4;
      }
    }
    else if ((uVar4 & 1) == 0) {
      FUN_0032c410("Custom attribute %d is used in the vertex shader %d, but the memory pool is not initialized.\n"
                   ,3,2);
      if (cVar8 != -1) goto LAB_0031d890;
LAB_0031d8a4:
      uVar5 = 0;
    }
    lVar6 = *(long *)(param_1 + 0x240);
  }
  lVar6 = *(long *)(lVar6 + 0x368);
  if (lVar6 == 0) {
    return uVar5;
  }
  if (*(char *)(lVar6 + 0x49) == -1 || (uVar1 & 1) != 0) {
    if (*(char *)(lVar6 + 0x4a) != -1 && (uVar2 & 1) == 0) goto LAB_0031d958;
LAB_0031d8dc:
    if (*(char *)(lVar6 + 0x4b) != -1 && (uVar3 & 1) == 0) goto LAB_0031d980;
  }
  else {
    FUN_0032c410("Custom attribute %d is used in the compute shader, but the memory pool is not initialized.\n"
                 ,0);
    uVar5 = 0;
    if (*(char *)(lVar6 + 0x4a) == -1 || (uVar2 & 1) != 0) goto LAB_0031d8dc;
LAB_0031d958:
    FUN_0032c410("Custom attribute %d is used in the compute shader, but the memory pool is not initialized.\n"
                 ,1);
    uVar5 = 0;
    if (*(char *)(lVar6 + 0x4b) != -1 && (uVar3 & 1) == 0) {
LAB_0031d980:
      FUN_0032c410("Custom attribute %d is used in the compute shader, but the memory pool is not initialized.\n"
                   ,2);
      if (*(char *)(lVar6 + 0x4c) == -1 || (uVar4 & 1) != 0) {
        return 0;
      }
      goto LAB_0031d904;
    }
  }
  if (*(char *)(lVar6 + 0x4c) == -1 || (uVar4 & 1) != 0) {
    return uVar5;
  }
LAB_0031d904:
  FUN_0032c410("Custom attribute %d is used in the compute shader, but the memory pool is not initialized.\n"
               ,3);
  return 0;
}

